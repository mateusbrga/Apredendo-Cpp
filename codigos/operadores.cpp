#include <iostream>
#include <math.h>
using namespace std;

int main (){
    double x=3,y=9;
    double soma = x + y;
    double subtracao = x - y;
    double multiplicacao = x * y;
    double divisao = x / y;

    std::cout << "Valor da soma de x e y: " << soma << std::endl;
    std::cout << "Valor da subtracao de x e y: " << subtracao << std::endl;
    std::cout << "Valor da multiplicacao de x e y: " << multiplicacao <<std::endl;
    std::cout << "Valor da divisao de x e y: " << divisao <<std::endl; 

    double raiz_quadrada = sqrt(y);
    double exponenciacao = pow(x, y);

    std::cout <<"Raiz quadrada de y: " << raiz_quadrada << std::endl;
    std::cout <<"x elevado a y: " << exponenciacao << std::endl;

    return 0;
}