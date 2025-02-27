#include <iostream>
using namespace std;

#define CONSTANTE_PLANK 6.62607015e-34 //e = a um numero elevado

float calculoEnergiaFotoes(float f, float h=CONSTANTE_PLANK){
    return h*f;
}

int main(){
    system("clear");
    float f;
    cout << "Frequência: ";
    cin >> f;
    cout << "Energia: " << calculoEnergiaFotoes(f) << endl;
    
    return 0;
}