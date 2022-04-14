#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,c;
    double delta, x1,x2;
    std::cout<< "Calculadora de Funcao do segundo grau!" << std::endl;
    std::cout<< "Digite valor de a: ";
    std::cin >> a;
    std::cout<<"Digite valor de b: ";
    std::cin >> b;
    std::cout << "Digite valor de c: ";
    std::cin >> c;
    delta= pow(b,2) - 4*a*c;
    std::cout << "Delta: " << delta <<std::endl;
    if(delta < 0){
        std::cout<< "A funcao nao tem raiz!(delta negativo)"<<std::endl;
    }
    else if(delta==0){
        x1= (b*-1)/(2*a);
        std::cout<<"Raiz: " << x1 <<std::endl;
    }
    else{
        x1= ((b*-1) + sqrt(delta))/2*a;
        x2= ((b*-1) - sqrt(delta))/2*a;
        if(x1==x2){
            std::cout<<"Raiz: " << x1 <<std::endl;
        }else{
            std::cout<<"Raizes: " << x1 <<", " << x2 <<std::endl;
        }
    }
    return 0;
}