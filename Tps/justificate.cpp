// Aluno: Matheus Luiz Oliveira Spindula
// Matricula: 623473
#include <iostream>
#include <string>
#include <algorithm> 
#include <stdio.h>
using namespace std;

// O metodo que esta comentado a seguir era um teste para pegar a posicao da maior frase,
//recebendo como parametro o array de string
/*int maiorValor(string *str){
    int max = 0, resp = 0;
    for(int i = 0 ; i < sizeof(str); i ++){
        if(max < str[i].length()){
            max = str[i].length();
            resp = i;
        }
    }
    return resp;
}*/
int maiorValor(int *aux, int n ){
    int max = 0, resp = 0;
    for(int i = 0 ; i < n; i ++){
        if(max < aux[i]){
            max = aux[i];
            resp = i;
        }
    }
    
    return resp;
}
void retirarEspacos(string *frases, int n ){
    
    for(int i = 0; i < n ; i++){
        while (isspace(frases[i][frases[i].length() - 1])){
            frases[i].pop_back(); //retirando os espaços dos estremos da string
        }
        int comeco = 0 ,fim = 0 ;
        for(int j = 0 ; j < frases[i].length(); j++){
            if(isspace(frases[i].at(j))){
                comeco = j; // onde foi encontrado o primeiro espaco
                fim = j + 1 ; //aux para difinir o fim os espacos
                while(isspace(frases[i].at(fim))){
                    fim++; //enquando não encontrar uma letra continuar procurando
                }
                frases[i].erase(comeco,fim-comeco-1);//retirar os espaços da string
            }
        }
    }

}
int main(){
    int n , maior;
    n = 0;
    cin >> n;
    int aux[n];

    string frasesEntradas[n];
    for(int i = 0 ; i < n ; i ++){
        frasesEntradas[i] = ""; //gerando o vetor de entrada
    }
    cin.ignore(); //necessario antes de usar o getline
    for(int i = 0 ; i < n ; i++){
        getline(cin,(frasesEntradas[i])); //le a frase com os espacos
    }
    retirarEspacos(frasesEntradas,n); 
    // o for seguinte serve para pegar armazenar em um array o tamanho das frases
    for(int i = 0; i < n ; i++){
        aux[i] = frasesEntradas[i].length();
    }
    int cc = 0;
    for(int i = 0 ; i < n; i++){
        //maior = *max_element(aux,aux+n); // retorna o maior elemento 
        maior = maiorValor(aux,n); // retorna a posicao do maior elemento 
        for(int j = 0; j < cc; j++){
            frasesEntradas[maior] = (" "+ frasesEntradas[maior]); // concatena os espaços na frase de acordo com o seu tamanho
        }
        cc++; // aumenta a quantidade de espacos a serem colocados
        aux[maior] = 0; //muda o tamanho da maior frase para 0
        maior = 0; // reseta a variavel de maior
    }
    for(int i = 0; i < n ; i++){
        cout << frasesEntradas[i] << endl; //imprimir as frases identadas 
    }
    return 0 ;
}   