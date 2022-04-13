#include <iostream>
using namespace std;

int main(){
    int i;
    for(i=10; i>=-10; i--){
        if(i % 3 ==0){
            std::cout << i << " eh duvisor de 3!" <<std::endl;
        }
        else{ 
            std::cout << i << " nao eh divisor de 3!" <<std::endl;
        }
    }
    return 0;
}