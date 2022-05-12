#include <iostream>
using namespace std;

int call_me(){
    static int v = 0;
    return v = v+1;
}
int main(){
    std::cout << call_me() << std::endl;
    std::cout << call_me() << std::endl;
    return 0;
}