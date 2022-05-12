#include "Veiculo.h"

//implementando funções (arquivo.cpp)


void Veiculo::acelerar(double aumVel){
    velocidade += aumVel;
}

void Veiculo::frear(double dimVel){
    velocidade -= dimVel;
}

double Veiculo::obterVelocidade(){
    return velocidade;
}