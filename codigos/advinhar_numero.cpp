#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, x, n_tent=0;
    srand(time(NULL));
    x = rand() % 101;
    std::cout << "Advinhe o numero!" <<std::endl;
    do{
        std::cout << "Digite um numero de 0 a 100: ";
        std::cin >> n;
        n_tent++;
        if(n > x){
            std::cout << "Tente um numero menor!"<< std::endl;
        }
        else{
            std::cout << "Tente um numero maior!" << std::endl;
        }
    }while(n != x);
    std::cout << "Voce acertou! " << "Numero de tentativas: "<<n_tent;
    
    return 0;
}