#include <iostream>
#include <array>
using namespace std;

array<int, 5> print_array_soma(int array1[5], int array2[5]){
    std::array<int, 5> array_soma;
    int i;
    for(i=0;i <5; i++){
        array_soma[i]= array1[i] + array2[i];
        std::cout <<"Array Soma, Posicao " << i << " = " << array_soma[i] << std::endl;
    }
    return array_soma;
}

int main(){
    int array1[5]={10,20,30,40,50};
    int array2[5]={1,2,3,4,5};
    print_array_soma(array1, array2);
    return 0;
}