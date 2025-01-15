#include <iostream>
using namespace std;

const int NUM_JOGADORES = 5;

int main(){
    int pontuacoes[NUM_JOGADORES];
    int soma = 0;
    const int LIMITE = 0;
    
    for(int i = 0; i < NUM_JOGADORES; i++){
        cout << "Digite a pontuação do jogador " << i + 1 << ": ";
        cin >> pontuacoes[i];
        soma += pontuacoes[i];
        
    }
    
    double  media =  soma / (double) NUM_JOGADORES;
    
    cout << "A média das pontuações é: " << media << endl;
    
    cout << "Os jogadores a cima da média são:" << endl;
    
    for (int i = 0; i < NUM_JOGADORES; i++){
        if (pontuacoes[i] > media){
            cout << "Jogador " << i + 1 << ": " << pontuacoes[i] << endl;
        }
    }
    return 0;
}