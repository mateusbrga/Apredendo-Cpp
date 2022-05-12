#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(10);
    int i ;
    double aux;
    double pi=4.0;
    for (i = 1; i < 901; i++){
        aux=i;
        if(i % 2 == 0){
            pi = pi + (4/((2*aux)+1));
        }else{
            pi = pi - (4/((2*aux)+1));
        }
    }

    std::cout<<"pi com " << i - 1 << " repeticoes: "<< pi <<std::endl;
    return 0;
}