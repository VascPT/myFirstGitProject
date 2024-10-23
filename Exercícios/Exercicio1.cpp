#include <iostream>
using namespace std;

int main(){

    char vogal;

    cout << "Introduza uma vogal: " << endl;
    cin >> vogal;
    
    if(vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u'){
        cout << "A vogal digitada é: " << vogal << endl;
    }else{ 
        cout << "A letra digitada não é uma vogal" << endl;
    }
    }
    //switch(vogal){
      //  case 'a':
        //cout << "A vogal é: (a)(A)" << endl;
        //break;
        //case 'e':
        //cout << "A vogal é: (e)(E)" << endl;
        //break;