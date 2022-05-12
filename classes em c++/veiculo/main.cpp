#include <iostream>
#include "veiculo.h"
using namespace std;

int main(){

    Veiculo v1;        //declarar
    v1 = Veiculo();    //instanciar
    v1.acelerar(50);   //usar

    //com ponteiro

    Veiculo *v2;
    v2 = new Veiculo();
    v2->acelerar(50); 
    v2->frear(20);  
    delete v2;          //destroi

    double velo1, velo2;
    velo1 = v1.obterVelocidade();
    velo2 = v2->obterVelocidade();
    std::cout << "Velocidade do veiculo 1: " << velo1 << std::endl;
    std::cout << "Velocidade do veiculo 2: " << velo2 << std::endl;

    return 0;
}