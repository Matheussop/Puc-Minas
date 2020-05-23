#include<iostream>
#include<limits.h>
using namespace std;

void lerValores(int matriz[][100], int n){
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++){
            cin >> matriz[i][j];
        }
    }
}

void somar(int matriz[][100], int n , int msoma[][101]){
    for(int i = 0 ; i < n; i++){
        msoma[i][0] = 0;
        for(int j = 1 ; j <= n; j++){
            msoma[i][j] = msoma[i][j-1]+matriz[i][j-1];
        }
    }
}

int maiorValor(int a , int b){
    int resp = 0;
    if(a > b){
        resp = a;
    }else{
        resp = b;
    }
    return resp;
}

void printMatriz(int matriz[][101] , int n){
    for(int i = 0 ; i < n; i++){
        cout << endl;
        for(int j = 0 ; j < n; j++){
            cout << matriz[i][j] << " | ";
        }
        
    }
}


int main(){
    
    int n,resp;
    int menorRetangulo = INT_MIN;
    int aux[101];
    int matriz[100][100], msoma[101][101];


    cin >> n;
    lerValores(matriz,n);
   
    somar(matriz,n,msoma);
    printMatriz(msoma,n);
    for(int i = 0 ; i < n; i++){
        for(int j = i ; j < n; j++){
            aux[0]=0;
            for(int x = 0;x < n;x++){
                aux[x+1] = maiorValor(msoma[x][j+1]-msoma[x][i]+aux[x],msoma[x][j+1]-msoma[x][i]);
                menorRetangulo = maiorValor(aux[x+1],menorRetangulo);
            }
        }
    }
    //printMatriz(matriz,n);
    cout << menorRetangulo;
    return 0;
}


