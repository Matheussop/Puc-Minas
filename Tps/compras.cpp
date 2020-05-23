#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int max , c, m , resp,  k , n ,resp1;
int aux[200][20];
int tam = 200*20;
int roupas[20];
int vestuario[20][20];


int compra(int max,int total);
int main(){
    cin >> n ;
    for(int i = 0; i < n; i++){
        cin >> m >> c; // lendo os valores de total disponivel para gastar e numero de roupas
        for(int j = 0; j < c; j++){
            cin >> roupas[j]; // lendo o numero de roupas disponiveis
            for(int x = 0; x < roupas[j]; x++){
                cin >> vestuario[j][x]; // lendo o valor de cada roupa
            }
        }
        memset(aux,-1, tam*4); //resetando o vetor  para n dar conflito. 
        resp1 = compra(m,0);
        resp1 > 0 ? cout << resp1 << endl :  cout << "no solution" << endl;
    }
    return 0;
}

int compra(int max,int total){
    if(max < 0){
        return -1e6; //para casos onde nn tem solução 
    }
    if(total == c){
        return m - max; // caso eu possa comprar o vestuario 
    }
    if(aux[max][total] != -1){
        return  aux[max][total]; // Enquanto eu não terminar de ver minha lista 
    }
    int resp = -1e6;
    for(int i = 0; i < roupas[total]; i++){
        resp = std::max(resp,compra(max - vestuario[total][i], total + 1)); // indo para o proximo valor da lista 
    }
    
    return aux[max][total] = resp;
}



/* Teste de função  maior
int main (){
    int A[12] ={2,4,8,9,63,2,7,5,63,1,4,5};
    int min = 999;
    int max = 0;
    maior(A,0,11,max);
    cout << max << "Maior " << endl;
}*/

void maior(int A[], int esq, int dir,int &max) {
    int max1, max2, meio;
    if (dir-esq <= 1) {
        if (A[esq] < A[dir]) {
            max = A[dir];
        }
        else {
            max = A[esq];
        }
    }
    else {
        meio = (esq+dir)/2;
        maior(A,esq,meio,max1);
        maior(A,meio+1,dir,max2);
        max = (max1 > max2) ? max1 : max2;
    }
}