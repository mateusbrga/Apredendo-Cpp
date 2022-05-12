#include <iostream>
using namespace std;

int main(){
    int n;
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> n;
    std::cout <<"Numero digitado: " << n <<std::endl;

    if(n % 2 == 0){
        if(n < 100){
            std::cout << "O Numero eh par e menor que 100!" << std::endl;
        }else{
            std::cout<<"O Numero eh par e maior ou igual a 100!" <<std::endl; 
        }
    }else{
        if(n < 100){
            std::cout <<"O Numero eh impar e menor que 100!" << std::endl;
        }else{
            std::cout <<"O Numero eh impar e maior que 100!" << std::endl;
        }
    }

    return 0;
}