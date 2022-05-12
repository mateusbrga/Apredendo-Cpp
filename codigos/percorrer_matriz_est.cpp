#include <iostream>
using namespace std;

int main(){
    int matriz[3][3]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            std::cout <<matriz[i][j]<< "\t";
            }
        std::cout<< "\n";
    }
    return 0;
}