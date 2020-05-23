// Aluno: Matheus Luiz Oliveira Spindula
// Matricula: 623473
#include <iostream>
#include <algorithm> 
#include <string.h>

using namespace std;

int visitados[100];
int matriz[100][100];

class Grafo {
    public:
    int V;//numero de vertices do grafo
    // Construtuor da classe //
    Grafo(){
        this->V = 1 ;
    }
    Grafo(int v);
    // -------------------- //
    // Metodos da Classe //
    void criarMatriz(int v);
    void zerarMatriz();
    void conexao(int v1,int v2,int p);
    void dfs(int v);//Faz dfs apartir de um vertiice
    void imprimir();
    // -------------------- //
};
Grafo::Grafo(int v){
    this->V = v;
    criarMatriz(v);
}

void Grafo::zerarMatriz(){
    for(int i=0;i < V;i++){
        for(int j = 0;j < V;j++){
            matriz[i][j] = 0;
        }
    }
}

void Grafo::criarMatriz(int v){
    int matriz[v][v];
    int visitados[v];
}
void Grafo::conexao(int v1,int v2,int p){
    if(p == 1){
        matriz[v1][v2] = 1;
    }else{
        matriz[v1][v2] = 1;
        matriz[v2][v1] = 1;
    }
}

void Grafo::dfs (int v)
{
	int i;
	visitados[v] = 1;
	for (i = 0; i < V; i++)
	{
		if (matriz[v][i] == 1 && visitados[i] == -1) {
            dfs(i);
        }
	}
}

void Grafo::imprimir(){
    for(int i = 0; i < V ; i++){
        for(int j = 0; j < V ; j++){
            cout << matriz[i][j] << " | ";
        }
        cout << endl ;
    }
}

int main () {
    int m = 0, n = 0, v = 0 , w = 0, p = 0, conectados;
    bool resp = true;
    cin >> n >> m;
    while( n != 0 && m != 0){
        Grafo grafo(n); 
        for(int i = 0; i < m ; i++){
            cin >> v >> w >> p;
            grafo.conexao(--v,--w,p);
        }
        conectados = 1;
        for(int i = 0; i < n ; i++){
            memset(visitados, -1, sizeof(visitados));
            grafo.dfs(i);
            for(int i  = 0 ; i < n ; i++){
                if(visitados[i] == -1){
                   conectados = 0;
                   i = n ;
                }
            }
        }
        grafo.zerarMatriz();
        cout << conectados << endl;
        cin >> n >> m;
    }
    return 0;
}

