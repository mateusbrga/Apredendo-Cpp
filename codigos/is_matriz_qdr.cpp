#include <iostream>
#include <array>
using namespace std;

const int MAX=5;


void func(int **matriz){
    
}

int main(){
    int **matriz;
    int i, j;
    static int l, c;
    std::cout<<"Digite o numero de linhas: " << std::endl;
    std::cin >>l;
    std::cout << "Digite o numero de colunas: " << std::endl;
    std::cin>>c; 
    matriz = new int*[l]; 
    for(i=0; i<l;i++){
        matriz[i]= new int[c]; //criando linhas
        for(j=0; j < c; j++){ //preenchendo e imprimindo
            matriz[i][j]=1;
            std::cout << matriz[i][j] <<"\t"; 
        }
        std::cout<<"\n";
    }
    func(matriz);
    for (i=0; i < c; i++){
        delete [] matriz[i];
    }
    delete [] matriz;
    return 0;
}