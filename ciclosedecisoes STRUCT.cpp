#include <iostream>
using namespace std;

struct Vogal{
    char vogal;
    string ID;
};

Vogal vogais [] = {
    {'a', "3445"},
    {'e', "3332"},
    {'i', "1234"},
    {'o', "5445"},
    {'u', "8788"}
};

int main(){
    for( Vogal v : vogais){
        
        cout << "A vogal " << v.vogal << " tem o ID " << v.ID << endl;
    }
    
    return 0;
    
}