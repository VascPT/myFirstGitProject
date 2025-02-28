#include <iostream>
#include <cmath>

using namespace std;

/*
@brief Função que aceita um array com 20 elementos inteiros
       e devolve a média dos seus valores
@param array Array de inteiros
@return Retorna a média dos valores do array
*/

//float media(int elementos[]){
  //  int soma = 0;
    //for(int i = 0; i<20; i++){
      //  soma += elementos[i];
    //}
    //return soma/20;
//}


/**
 * @brief Função que aceita um array de inteiros
 * @param array Array de inteiros
 * @return A palavra "Par" se a média for par 
 *         A palatra "Impar" se a média for impar 
 */
 
 float media2(int inteiros[]){
     int soma = 0;
     int tamanho= sizeof(inteiros) / sizeof(inteiros[0]);
     
     for(int i=0; i < tamanho; i++){
         soma += inteiros[i];
     }
     
     
     if((soma/tamanho) % 2 == 0 ){
         cout << "Par";
     }else{
         cout << "Impar";
     }
 }




int main(){
    system("clear");
    
    
    return 0;
}