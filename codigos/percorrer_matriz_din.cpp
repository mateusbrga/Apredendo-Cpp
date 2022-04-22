#include <iostream>
#include <array>
using namespace std;

int main(){
    //l = linhas & c = colunas
    int l=3 , c=4;
    int **matriz= new int*[3];
    for(int i=0; i < l; i++){
        matriz[i]= new int[c];
        for (int j=0; j< c;j++){
            matriz[i][j]=i*j;
            std::cout << matriz[i][j]<< "\t";
        }
        std::cout << "\n";
    }
}