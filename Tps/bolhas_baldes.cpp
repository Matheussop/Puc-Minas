#include<iostream>

using namespace std;
int cc = 0;
void merge(int *vetor, int inicio, int meio , int fim){
    int *temp,p1,p2,tamanho;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio + 1 ;
    temp = (int*) malloc(tamanho*sizeof(int));
    int aux_count = 0;
    while(p1 <= meio && p2 <= fim){
        if(vetor[p1] <= vetor[p2]){
            temp[aux_count++] = vetor[p1++]; // caso um elemento da primeira parte do array seja menor
        }
        else{
            temp[aux_count++] = vetor[p2++];
            cc += (meio - p1 + 1); // Como as inversoes so ocorrem quando um elemento da segunda metade do array e menor que um da primeira, entao deve-se contar as inversoes aqui 
        }
    }
    while(p1 <= meio)
        temp[aux_count++] = vetor[p1++];
    while(p2 <= fim)
        temp[aux_count++] = vetor[p2++];

    for(int i = 0; i < aux_count; i++) {
        vetor[inicio++] = temp[i];
    }
    free(temp);
}
void mergeSort(int *vetor, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = ((inicio + fim)/2);
        mergeSort(vetor,inicio,meio);
        mergeSort(vetor,meio+1,fim);
        merge(vetor,inicio,meio,fim);
    }
}

int main(){
    int tam = 0;
    cin >> tam;
    while(tam != 0){

        int *vetor = new int[tam];

        for (int i = 0; i < tam; i++)
        {
            cin >> vetor[i]; 
        }

        mergeSort(vetor,0,tam-1);
        
        free(vetor);
        cc % 2 == 0 ? cout << "Carlos" <<endl : cout << "Marcelo" << endl ;
        cin >> tam;
        cc = 0;
    }
    return 0;
}