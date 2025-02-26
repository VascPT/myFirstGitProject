#include <iostream>
using namespace std;

int x = 10;
int y = 20;
int g = 30;

//função para somar x com o y sendo os valores
//passados por referência

int soma(int &z, int &w){
    return z + w;
}

//função que soma o g, passado por referência
//com o valor retornado da função soma dem x e y

int soma2(int &g){
    return g + soma(x,y);
}

//passar um valor por uma função

void mostraValor(int g){
    system("clear");
    cout << g << endl;
}

int main(){
    mostraValor(soma(x,y));
    
}