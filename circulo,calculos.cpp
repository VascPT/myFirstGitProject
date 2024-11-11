#include <iostream>
using namespace std;
int main(){
    const float PI = 3.14159;
    float raio;
    cout << "Digite o valor do raio: ";
    cin >> raio;
    cout << "O perimetro da circunferência é: " << 2*PI*raio << endl;
    cout << "A área da circunferência é: " << PI*(raio*raio) << endl;
    cout << "O diâmetro é: " << 2*raio << endl;
    return 0;
}