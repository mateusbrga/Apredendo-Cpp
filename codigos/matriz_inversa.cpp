#include <iostream>
using namespace std;


int **func(int **matriz, int n, int m){
    int i, j;
    static int v=0;
    int **matriz_inversa;
    matriz_inversa = new int*[m];

    for(i=0; i<m;i++){
        matriz_inversa[i]=new int[n];
        for(j=0;j<n;j++){
            matriz_inversa[i][j]=matriz[j][i];
            std::cout << matriz_inversa[i][j] << "\t";
        }
        std::cout <<"\n";
    }

    return matriz_inversa;
}

int main(){
    int i, j, l=2,c=3,cont=0;
    int **matriz;
    matriz=new int*[l];
    for(i=0; i<l;i++){
        matriz[i]=new int[c];
        for(j=0;j<c;j++){
            matriz[i][j]=cont+1;
            cont++;
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
    int **matriz_inversa;
    matriz_inversa = func(matriz,l,c);


    std::cout<< matriz_inversa;



    for(i=0;i<c;i++){
        delete [] matriz[i];
    }
    delete [] matriz;
}