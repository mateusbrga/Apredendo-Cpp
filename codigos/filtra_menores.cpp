#include <iostream>
using namespace std;

int func(int **matriz,int valor){
    int i, j=0, cont=0;
    for(i=0;i<6;i++){
        if(matriz[i][j]<3){
            delete [] matriz[i];
            cont++;
        }
        
    }
    return cont;
}

int main(){
    int i,j, resultado;
    int **matriz;
    
    matriz = new int*[6];
    for(i=0;i<6;i++){
        matriz[i] = new int[2];
        for(j=0;j<2;j++){
            std::cout<<"posicao["<<i<<"]["<<j<<"]: ";
            std::cin>>matriz[i][j];
        }
    }
    resultado=func(matriz, 3);
    std::cout<<"Numero de pares removidos: " <<resultado;
    return 0;
}