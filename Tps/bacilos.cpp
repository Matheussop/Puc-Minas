#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<string>

using namespace std;
int fibonacci[1501];

//Metodo para retornar um numero que tenha dentro da minha sequencia de fibonacci
int divisaopor1500(int tam,string ponto){
    int resp = 0;
    for(int i = 0; i < tam; i++){
        resp = ((resp * 10) + (ponto[i] - '0'))% 1500; 
    }
    return resp;
}
int main(){
    int casos = 0;
    string p = "";
    int x=0,y=1,temp= 0;
    cin >> casos;
    //Como eu sei os primeiros valores da sequencia eu so 
    fibonacci[0] = x;
    fibonacci[1] = y;
    fibonacci[2] = y;
    //O seguinte for serve para calcular os valores de fibonacci para a questao
    for(int i = 2; i <1501; i++){
        temp = (x + y) % 1000; //calculando o proximo valor do fibonacci e mod 1000 para o valor nn ultrapassar a casa dos milhares
        x = y % 1000; // mantendo o valo anterior;
        fibonacci[i] = temp; // atribuindo o resultado ao meu vetor de valores de fibonacci 
        y = temp; //atribuindo o novo valor dda sequencia de fibonacci
    }
    while(casos){
        cin >> p;
        temp = divisaopor1500(p.length(),p);
        printf( "%03d\n", fibonacci[temp] ); // usando printf para poder colocar quando necessario 0 antes dos valores
        casos--;
    }
    return 0;
}