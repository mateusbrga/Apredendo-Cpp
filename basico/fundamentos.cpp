#include <iostream>
using namespace std; 

int main(){
    char nome[30];
    cout << "Qual o seu nome? ";   // << fluxo de saída
    cin >> nome;                   // >> fluxo de entrada
    cout << "Olá " << nome << ", prazer em conhece-lo.\n"; 

    // usando de forma encadeada
    float comp, larg;
    cout << "Infome o Comprimento e Largura: ";
    cin >> comp >> larg;
    cout << "Comprimento: " << comp << "\n" << "Largura: " << larg << "\n"; 
    cout << "Área do retangulo: " << comp*larg; 
    return 0;
}