#include <iostream>
#include <string>
using namespace std;

int main(){
    //trabalhando com string
    //inclua a biblioteca #include <string> e usar tbm using namespace std
    //[i] acessa a posicao do caracter e + contatena string
    string nome= "Mateus";
    std::cout << "Nome: " << nome << std::endl;
    int tam;
    tam= nome.size();
    bool vazia;
    vazia=nome.empty();
    std::cout << "Tamanho dda string: " << tam << std::endl;
    std::cout << "Está vazia?(0/1): " << vazia << std::endl;
    /* outras funções: at(int i), erase(),  
    replace(inicio, N de caracteres, string), find(), substr(), compare() */
     
    }
    