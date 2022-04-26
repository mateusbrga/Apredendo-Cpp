#include <iostream>

int main(){
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matriz_identidade[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    
    int matriz_inversa[3][3];
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            matriz_inversa[i][j]=matriz[j][i];
            std::cout << matriz_inversa[i][j]<< "\t";
        }
        std::cout << "\n";
    }
}