#include <iostream>
using namespace std;
 int main(){
     int n1=100;
     int n2=200;
     bool expressao = (n1==100) && (n2==200); //&& (and)
     std::cout << "Resultado da expressao: " << expressao <<std::endl;

     expressao = (n1==100)||(n2==100); // || (or)
     std::cout << "Resultado da expressao: " << expressao <<std::endl;

     expressao = !((n1==100)||(n2==100)); // ! (not)
     std::cout << "Resultado da expressao: " << expressao <<std::endl;
     return 0;

 }