#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double raiz;
    int n;
    std::cout << "Calculadora de raiz quadrada!" <<std::endl; 
    std::cout << "Digite um numero: ";
    std::cin >> n;
    raiz=sqrt(n);
    std::cout << "Raiz: " << raiz <<std::endl; 
    return 0;
}