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
void printMatriz(int matriz[][100] , int n){
    for(int i = 0 ; i < n; i++){
        cout << endl;
        for(int j = 0 ; j < n; j++){
            cout << matriz[i][j] << " | ";
        }
    }
}

void iniciarVetor(int vetor[], int n){
       for(int i = 0;i < n ;i++){
        vetor[i] = 0; 
    } 
}

int main(){
    int n,resp;
    int aux[101];
    int matriz[100][100];
    cin >> n;
    lerValores(matriz,n);

    int linhaSoma[n];
    int maior_Atual = 0 , maior_Total = INT_MIN;
    for(int i = 0 ; i < n; i++){
        iniciarVetor(linhaSoma, n);
        for(int j = i ; j < n; j++){
            int aux = 0, maiorLinha = 0;
            for(int x = 0;x < n;x++){
                linhaSoma[x] +=  matriz[j][x];
                // Comeco do Kadane
                aux += linhaSoma[x];
                if(maiorLinha < aux){
                    maiorLinha = aux;
                }
                if(aux < 0)
                    aux = 0;
                //Fim Kadane
            }
            //Continuacao Kadane
            maior_Atual = maiorLinha;
            if(maior_Atual > maior_Total){
                maior_Total = maior_Atual;
            }
            //Fim Kadane
        }
    }
    cout << maior_Total << endl;
    return 0;
}