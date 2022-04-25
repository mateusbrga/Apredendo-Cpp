#include <iostream>
using namespace std;


bool matriz_quadrada(int matriz[5][5]){
    int i=0, j=0, lin=0, col=0, n_elem=0;

    for (i=0 ;i <5; i++){
        if(matriz[i][j]!=0) lin++;
        
        for(j=0; j<5;j++){
            if(matriz[i][j]!=0) n_elem++;
            //std::cout<< matriz[i][j]<<"\t";
        }
        //std::cout<<"\n";
    }  

    col=n_elem/lin; 

    if(col==lin) return true;
    else return false;  
}

int main(){
    int matriz[5][5]={{1,2},{3,4}};
    int matriz2[5][5]={{1,2,3},{4,5,6}};

    if (matriz_quadrada(matriz)) std::cout << "Matriz eh quadrada!" <<std::endl; 
    else std::cout <<"Matriz nao eh quadrada!" <<std::endl;

    if (matriz_quadrada(matriz2)) std::cout << "Matriz eh quadrada!" <<std::endl;
    else std::cout << "Matriz nao eh quadrada!" << std::endl;
    
    return 0;
}