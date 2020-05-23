#include<iostream>
#include <string.h>
using namespace std;


long long int numbermax = 1, numbermin = 0,i;
char symbol[20];
long long int numbers[20], aux[20];
/*O programa a seguir consiste na logica de para o maior valor  fazer todas as somas primeiros e depois as multiplicacoes
e ja para o menor fazer as multiplicacoes e depois as somas*/
void calcFirtsValues(){
    for(int j = 0; j < i ;j++){
        if(symbol[j] == '*'){
        numbers[j+1] = numbers[j] * numbers[j+1]; //fazendo a soma de todos os valores que possui o simbolo de soma antecedido dele
        numbers[j] = 0; // colocando o valor da posicao do vetor = 1 pois numbermax for multiplicar com os restantes dos itens nao tera interferencia no resultado
        }
        if(symbol[j] == '+'){
        aux[j+1]=aux[j]+aux[j+1];//fazendo a multiplicacao de todos os valores que possui o simbolo de multiplicacao antecedido dele
        aux[j] = 1; // colocando o valor da posicao do vetor = 0 pois numbermin for somar com os restantes dos itens nao tera interferencia no resultado
        }
    }
}
int main(){
    int n = 0;
    cin >> n;
    while(n--){
        bool resp = false;
        for(i=0; i<20; i++) {
            numbers[i];
            aux[i];
        }
        i = 0;
        while(!resp){
            scanf("%llu%c",&numbers[i],&symbol[i]);
           if(symbol[i] == '\n'){
               resp = true;
           }
           i++;
        }
        for(int j = 0; j < i; j++){
            aux[j] = numbers[j];
           // cout << numbers[j] << endl;
        }
        calcFirtsValues();
        
        int j = i;
        while(j--){
            numbermin += numbers[j];
            numbermax *= aux[j];
        }
        cout << "The maximum and minimum are " << numbermax << " and " << numbermin << "." << endl;
        numbermin = 0;
        numbermax = 1;
    }
    return 0;
}