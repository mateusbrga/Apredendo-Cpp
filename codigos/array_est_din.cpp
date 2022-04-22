#include <iostream>
#include <array>
using namespace std;

int main (){
    string nomes1[50]; //estático
    string *nomes2 = new string[50]; // dinamico

    double media[50]; //estatico
    double *media2 = new double[50]; //dinamico
    
    for(int i=0; i < 5; i++){
        std::cout << "Digite o " << i+1 <<"o valor: ";
        std::cin >> media2[i]; 
        std::cout << media2[i] << std::endl;
    }
    delete [] nomes2;
    delete [] media2;
    return 0;
}