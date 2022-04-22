#include <iostream>
using namespace std;

int main(){
    int *vet = new int [5];
    for (int i=0; i < 5; i++){
        vet[i]=i*2;
        std::cout << "Na posicao "<<i<< " o valor eh "<< vet[i] << std::endl;
    }
    return 0;
}