#include <iostream>

using namespace std;

int main(){
    int n=4;
    int *a = new int[n];
    a[20]=2;
    std::cout <<a[20];

    return 0;
}