#include <iostream>
#include <random>
#include <ctime>

using std::cout;
using std::endl;

constexpr int MIN = 0;
constexpr int MAX = 5;

constexpr int RAND_NUMS_TO_GENERATE = 5;

int main()
{
    std::srand(std::time(nullptr));
    for (int i = 0; i < RAND_NUMS_TO_GENERATE; i++)
        cout << rand() % MAX  << "; ";
    cout << endl;

    return EXIT_SUCCESS;
}