#include <iostream>

using namespace std;

int main()
{
    int numeros[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (int i = 0 ; i < 20 ; i++ ){
        if(numeros[i] %2 == 0)
        cout << numeros[i] << " ";
    }

    return 0;
}