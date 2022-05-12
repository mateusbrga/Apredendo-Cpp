#include <iostream>
using namespace std;

//criando a classe (arquivo.h)
class Veiculo{
    private:
        string modelo;
        int ano_fabricacao;
        double velocidade;
    public:
        Veiculo();
        void acelerar(double aumVel);
        void frear(double dimVel);
        double obterVelocidade();

};