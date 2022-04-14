#include <iostream>
using namespace std;
 int main(){
     int i, qtd_neg=0, qtd_pos=0;
     double n, acum_pos=0, acum_neg=0, media_pos, media_neg;

     for(i=0; i < 5; i++){
         std::cout << "Digite um valor: ";
         std::cin >> n;
         if(n < 0){
             acum_neg += n;
             qtd_neg++;
         }else{
             acum_pos += n;
             qtd_pos++;
         }
     }
     if(qtd_pos==0){
         std::cout << "Nao ha numeros positivos!" << std::endl;
     }else{
        media_pos = acum_pos/qtd_pos;
        std::cout << "Media positivos: " << media_pos <<std::endl;
     }
     if(qtd_neg==0){
         std::cout << "Nao ha numeros negativos!" << std::endl;
     }else{
         media_neg = acum_neg/qtd_neg;
     std::cout <<"Media negativos: " << media_neg <<std::endl;
     }

     return 0;
 }