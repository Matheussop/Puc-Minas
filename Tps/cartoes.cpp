#include<iostream>
#include <cstring>
using namespace std;


long long  array[10777], aux1[10777], aux2[10777]; // declarando vetores global do tipo long long devido ao tamanho dos numeros da entrada

int main(){
    int n = 0;
    while(cin >> n){
        memset(aux2, 0, sizeof(long long)*n); //resetando o vetor auxiliar para n dar conflito. 

        for(int i = 1 ; i <= n ; i++){
            cin >> array[i];
            array[i] += array[i-1]; //Somando a entrada com seu anterior , assim descubro a soma de todos os valores.
        }
        
        for(int i = 1 ; i <= n ; i++){
          for(int j = 0 ; j <= n-i ; j++){
              aux1[j] = array[j+i]-array[j] - min(aux2[j], aux2[j+1]); //calculando o maior valor possivel para cada posicao do meu array
          }
          swap(aux2, aux1); //troca os valores que peguei no for interno , assim fazendo com que no for o min seja dos valores anteriores obtidos;
        }
        cout << aux2[0] << endl;
    }
}
