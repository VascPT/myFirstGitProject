#include <iostream>
using namespace std;

/**
 * @brief Função que soma um número inteiro com um decimal
 * @param x Número inteiro
 * @param y Número decimal
 * @return Soma dos dois números
 */
 

 float soma(int x, float y){
     return x + y;
 }
 
 /**
  * @brief Função que aceita duas referências de inteiros
  *        multiplica estes dois valores e soma 10
  * @param x Primeira ref. número inteiro
  * @param y Segunda ref. número inteiro
  * @return Soma dos dois números
  */
  
  int soma2 (int &x, int &y){
      return (x*y)+ 10;
  }
  
  /**
   * @brief Função que aceita dois inteiros e retorna
   *        o resto da divisão entre estes dois números
   * @param x Primeiro número inteiro
   * @param y Segundo número inteiro
   * @return Resto da divisão entre os dois números
   */
   
   int restoDivisao (int x, int y){
       return x % y;
   }
   
   /**
    * @brief Função que aceita um array de inteiros e
    *        retorna o valor do indice 0
    * @param x Array de inteiros
    * @return Valor do indice 0 
    */ 
    
    int primeiro (int x[]){
        return x[0];
    }
    
    /**
     * @brief Função que aceita um array de inteiros, um inteiro
     *        e devolve o indice referente ao inteiro passado
     * @param x Array de inteiros
     * @param y Inteiro
     * @return Indice referente ao ponteiro passado como valor y
     */
     
     int indice (int x[], int y){
         return x[y];
     }
     
     /**
      * @brief Função que aceita um array de inteiros, um inteiro
      *        e imprime todos os valores do array até ao indice 
      *        passado como valor y 
      * @param x Array de inteiros
      * @param y Inteiro 
      */ 
      
      void indice2 (int x[], int y){
          for(int i = 0; i < y; i++){
              cout << x[i] << " ";
          }
          cout << endl;
      }
      
      
      
      struct ponto{
          int x;
          int y;
      }
      
      ponto pontos[] = {{1,2},{3,4},{5,6}};
      
      /**
       * @brief Função que aceita um array de pontos e imprime
       *        o valor x de cada ponto 
       * @param x Array de pontos
       */
       
       void valor (ponto x[]){
           for ( int i=0; i<3; i++){
               cout << x[i].x << " ";
           }
           cout << endl;
       }
       
       int dobro(int x){
           return x*2;
       }
       
       /**
        * @brief Função que aceita um inteiro e devolve o seu dobro
        *        recorrendo a função dobro(int) definida acima
        * @param x Inteiro
        * @return Dobro do inteiro 
        */
        
        int dobro(int x){
            return dobro(x);
        }
        
        /**
         * @brief Função que aceita um array de inteiros com 10
         *        elementos e devolve a soma de todos os elementos
         * @param x Array de inteiros
         * @return Soma de todos os elementos do array
         */
         
         int somaArray(int x[]){
             int soma = 0;
             for( int i = 0; i<10; i++){
                 soma += x[i];
             }
             return soma;
         }
        
        
  
 
 
 int main(){
     
     
     return 0;
 }