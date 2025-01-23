#include <iostream>
using namespace std;

char vogais[] = {'a', 'e', 'i', 'o', 'u'};
int main(){
    for( char v : vogais){
        string ID;
        cout << "Indique o ID para a vogal " << v << endl;
        cin >> ID;
        cout << "ID da vogal " << v << " é: " << ID << endl;
    }
    
}