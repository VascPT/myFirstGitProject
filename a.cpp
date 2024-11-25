#include <iostream>
using namespace std;
struct pessoa {
    string nome;
    int idade;
    float altura;
};


int main(){
    pessoa p1 = {"João", 20, 1.75};
    
    p1.nome = "João";
    p1.idade = 20;
    p1.altura = 1.75;
}