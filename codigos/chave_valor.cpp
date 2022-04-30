#include <iostream>
using namespace std;

void imprime_matriz(int **matriz,int l,int c){
    int i, j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            std::cout << matriz[i][j]<<"\t";
        }
        std::cout << "\n";
    }
}

int **func(int vet1[], int vet2[]){
    int **matriz;
    int tam=3,i,j;
    
    matriz=new int*[3];

    for(i=0;i<3;i++) matriz[i]=new int[tam];
    
    for(i=0;i<tam;i++){
        for(j=0;j<2;j++){
            if(j==0) matriz[i][j]=vet1[i];
            else matriz[i][j]=vet2[i];
        }
    }
    return matriz; 
}

int main(){
    int vet1[3]={1,2,3};
    int vet2[3]={1,4,9};
    int **p;
    p=func(vet1, vet2);

    for(int i=0; i<3;i++) std::cout<<vet1[i]<<"\t";
    std::cout<<"\n";
    for(int i=0; i<3;i++) std::cout<<vet2[i]<<"\t";
    std::cout<<"\n";

    std::cout<<"Chaves / Valores"<<"\n";
    imprime_matriz(p,3,2); 
    return 0;
}