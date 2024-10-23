#include <iostream>
using namespace std;

int main(){

    int Número;

    cout << "Digite um número: " << endl;
    cin >> Número;

    Número%2 == 0 ? cout << "Par" : cout << "Ímpar" << endl;

    if(Número%2 == 0){
        cout << "Par" << endl;
    }else{
        cout << "Ímpar" << endl;
    }
    }