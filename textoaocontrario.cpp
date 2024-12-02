#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    string userInput;
    cout << "Digite algo: ";
    cin >> userInput;
    int dimensao = userInput.length();
    for(int x=dimensao-1; x>=0; x--){
        cout << userInput[x];
    }
    return 0;
}