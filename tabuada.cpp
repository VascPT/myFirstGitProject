#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int num;
    cout << "Digite um número: ";
    cin >> num;
    for(int i=1; i<=10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }
}