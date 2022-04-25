#include <iostream>
using namespace std;

const int MAX=10;

bool matriz_quadrada(int **matriz, int lin, int col){
    int i, j;
    if(lin==col)
        return true;
    else return false;
}
int main(){
    int i, j, l=3 ,c=3;
    int **matriz;
    matriz= new int*[l];
    for(i=0; i<l;i++){
        matriz[i]=new int[c];
        for(j=0;j<c;j++){
            matriz[i][j]=1;
        }
    }
    matriz_quadrada(matriz, l, c);
    if(matriz_quadrada(matriz, l, c)) std::cout <<"eh quadrada!"<<std::endl;
    else std::cout<< "nao eh quadrada!" <<std::endl; 
}