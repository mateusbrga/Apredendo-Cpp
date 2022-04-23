#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>


void embaralhe(int vet[5]){
    int i, aux, x, y;
    for (i=0; i<20;i++){
        x= rand() % 5;
        y= rand() % 5;
        do{
            y= rand() % 5;
        }while(x==y);
        aux = vet[x];
        vet[x] = vet[y]; 
        vet[y] = aux;
    }
    for(i=0; i<5; i++){
        std::cout << vet[i] << "\t";
    }
}

int main(){
    int i, vet[5];
    for (i = 0; i < 5; i++){
        std::cout << "Digite um valor para posicao " << i <<": "; 
        std::cin >> vet[i];
    }
    std::cout << "\n" << "Seu vetor: ";
    for(i = 0; i < 5; i++){
        std::cout << vet[i] << "\t";
    }
    std::cout << "\n" << "Vet. emb.: ";
    embaralhe(vet);
    return 0;
}