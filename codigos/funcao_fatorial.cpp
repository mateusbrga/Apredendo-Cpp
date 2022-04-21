#include <iostream>
using namespace std;

int fatorial(int n){
    int fatorial = 1;
    while(n > 1){
        fatorial = fatorial * n;
        n--;
    }
    return fatorial;
}

int main(){
    int valor =6;
    std::cout << "Fatorial de "<<valor<< " eh: "<<fatorial(valor);
}
