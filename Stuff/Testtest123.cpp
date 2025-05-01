#include <iostream>
using namespace std;

int main(){
    float num;
    cout << "Write a number: ";
    cin >> num;
   do{
    if(num>0){
        cout << "Here is the result of your number times two: " << num*2 << endl;
    }else{
        cout << "Number has to be higher than 0! Write another number: ";
        cin >> num;
    }
}while (num <= 0);
    float num2;
    cout << endl << "Now tell me another number: ";
    cin >> num2;
    do{
    if(num2>0){
    cout << "Here is the division of your second number by 5: " << num2 / 5 << endl;
    }else{
        cout << "Number has to be higher than 0! Write another number: ";
        cin >> num2;
    }
}while (num2 <= 0);
    
    return 0;
}