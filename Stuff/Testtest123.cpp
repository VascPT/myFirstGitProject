#include <iostream>
#include "testepush.h"
using namespace std;

int main(){
    float num;
    cout << "Write a number: ";
    cin >> num;
    while(num <= 0){
        cout << "Number has to be higher than 0! Write another number: ";
        cin >> num;
    }
    cout << "Here is the result of your number by two: " << num * 2 << endl << endl;
    float num2;
    cout << "Write another number: ";
    cin >> num2;
    while(num2 <= 0){
        cout << "Number has to be higher than 0! Write another number: ";
        cin >> num2;
    }
    cout << "Here is the division of your second number by 5: " << num2 / 5 << endl;
    return 0;
}