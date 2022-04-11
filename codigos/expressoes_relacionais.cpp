#include <iostream>
using namespace std;

int main(){
    int numero=9;
    bool comparacao1 = 9 == numero;
    bool comparacao2 = 8 == numero;

    std::cout <<"9==9: "<< comparacao1 <<std::endl;
    std::cout <<"8==9: "<< comparacao2 <<std::endl;

    comparacao1= 9!=numero;
    comparacao2= 8!=numero;

    std::cout <<"9!=9: "<< comparacao1 <<std::endl;
    std::cout <<"8!=9: "<< comparacao2 <<std::endl;

    comparacao1= 9 > numero;
    comparacao2= 8 > numero;

    std::cout <<"9 > 9: "<< comparacao1 <<std::endl;
    std::cout <<"8 > 9: "<< comparacao2 <<std::endl;

    comparacao1= 9 <= numero;
    comparacao2= 8 <= numero;

    std::cout <<"9 <= 9: "<< comparacao1 <<std::endl;
    std::cout <<"8 <= 9: "<< comparacao2 <<std::endl;
    return 0;
}