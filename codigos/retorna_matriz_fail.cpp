#include <iostream>
using namespace std;

int **mod(int **matriz){
    int cont=1;
	for(int i = 0; i < 3; i++){
		for(int j=0; j<3;j++){
            matriz[i][j]=cont;
            cont++;
        }
	}
	
	return matriz;

}

int main(){
	int *(*matriz);
    int l=3, c=3, i, j;
    matriz= new int*[l];
    for(i=0;i<c;i++){
        matriz[i]=new int[c];
        for(j=0;j<c;j++){
            matriz[i][j]=0;
        }
    }
	int **p;

	p = mod(matriz);

	for(int i = 0; i < 3; i++){
	    for(j=0; j<3; j++){
            std::cout << **(p+i) << "\t";
        }
        std::cout << "\n";
    }
    
	return 0;
}