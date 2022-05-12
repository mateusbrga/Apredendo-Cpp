#include <iostream>
using namespace std;

int main(){
    int n, k;
    double resultado;
    std::cout << "Calculadora de exponenciacao - (n: numero & k: expoente)" <<std::endl;
    std::cout << "(k > 0 para sair)" <<std::endl;
    do{
        std::cout << "Digite um valor para n: ";
        std::cin >> n;
        std::cout << "Digite um valor para k: ";
        std::cin >> k;
        resultado=n;
        for(int i=0;i < k - 1; i++){
                resultado=resultado*n;
        }
        if(k==0){
            resultado = 1;
        }
        std::cout << resultado << std::endl;
    }while(k >= 0);
    std::cout << "Fim!";
    return 0;
}
