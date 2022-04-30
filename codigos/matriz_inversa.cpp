#include <iostream>
using namespace std;


void imprime_matriz(float **matriz, int l, int c){
    int i, j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

float **func(float **matriz, int n){
    int i, j, l, c, k;
    c=n;
    l=c;
    float **identidade;
    identidade=new float*[l];

    for(i=0;i<l;i++){
        identidade[i]=new float[c];
        for(j=0;j<c;j++){
            if(i==j) identidade[i][j]=1;
            else identidade[i][j]=0;
        }
    }
    float pivo=0, m=0, p=0;
    for(j = 0; j < 3; j++){
        pivo = matriz[j][j];
            for(k = 0; k < 3; k++){
            matriz[j][k] = (matriz[j][k])/(pivo); //L1 -> L1/pivo , L2 -> L2/pivo, L3 -> L3/pivo
            identidade[j][k] = (identidade[j][k])/(pivo); //Ex: 1 0 0 / pivo  , 0 1 0 / pivo,   0 0 1/ pivo
            }
    
        for(i = 0; i < 3; i++){
            if(i != j){
                m = matriz[i][j];
                for(k = 0; k < 3; k++){
                matriz[i][k] = (matriz[i][k]) - (m*matriz[j][k]); //Ex: L2 -> L2 - ( 1"m" - L1) 
                identidade[i][k] = (identidade[i][k]) - (m*identidade[j][k]);  
                    }
                }
            }  
    }
    
    return identidade;
    
}

int main(){
    float **matriz;
    int i, j, l=3, c=3;
    matriz= new float *[l];

    for(i=0; i<l;i++){
        matriz[i]=new float[c];
        for(j=0;j<c;j++){
            std::cout << "Digite um valor para posicao [" <<i<<"][" <<j <<"]: ";
            std::cin >> matriz[i][j];
        }
    }
    std::cout<<"Matriz: "<<std::endl;
    imprime_matriz(matriz, l, c);

    float **p;
    p=func(matriz, l);

    std::cout<<"Matriz Inversa: "<<std::endl;

    imprime_matriz(p,l,c);

    return 0;
}
