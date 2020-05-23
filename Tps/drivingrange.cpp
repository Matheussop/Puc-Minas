#include<iostream>
#include<limits.h>
#include<map>
#include<vector>
#include<algorithm> //sort
#include<string.h> //memset
using namespace std;

class Aresta{
    int v1,v2,peso;
    public:
    Aresta(int v1,int v2,int peso);
    int getV1();
    int getV2();
    int getPeso();
    bool operator < (const Aresta& aresta2) const {
        return (peso < aresta2.peso);
    }
};
Aresta::Aresta(int v1,int v2,int peso){
    this->v1 = v1;
    this->v2 = v2;
    this->peso = peso;
}
int Aresta::getV1(){
    return this->v1;
}
int Aresta::getV2(){
    return this->v2;
}
int Aresta::getPeso(){
    return this->peso;
}
class Grafo {
    public:
    int V;//numero de vertices do grafo
    vector<Aresta> arestas; //Vetor de arestas
    int componentes;
    // Construtuor da classe //
    Grafo(){
        this->V = 1 ;
    }
    Grafo(int v);
    // -------------------- //
    // Metodos da Classe //
    void criarMatriz(int v);
    void popularMatriz();
    int kruskal(int v0);
    void conexao(int v1,int v2,int peso);
    int getPeso(int v1,int v2);
    void Union(int pai[],int v1,int v2);
    int Find(int pai[],int v);
    int possuiCiclo();
    // -------------------- //
};
Grafo::Grafo(int v){
    this->V = v;
    this->componentes = 0;
}
//Metodo para adicionar uma aresta
void Grafo::conexao(int v1,int v2,int peso){
    Aresta aresta(v1,v2,peso);
    arestas.push_back(aresta);
}
int Grafo::getPeso(int v1,int v2){
    return arestas[v1].getPeso();
}
int Grafo::Find(int pai[],int v){
    if(pai[v] == -1){
        return v;
    }else{
        return Find(pai,pai[v]);
    }
    
}
void Grafo::Union(int pai[],int v1,int v2){
    int v1_set = Find(pai,v1);
    int v2_set = Find(pai,v2);

    pai[v1_set] = v2_set;
}
int Grafo::kruskal(int v0){
    int limiteTotal = 0, limite = 0;
    vector<Aresta> arvore;
    int tamAresta = arestas.size();
    //int pai[V];
    int * pai = new int[V];
    sort(arestas.begin(), arestas.end());//ordenar o vetor de arestas
    memset(pai,-1,sizeof(int)* V);
    for (int i = 0; i < tamAresta; i++)
    {

        int v1 = Find(pai,arestas[i].getV1());
        int v2 = Find(pai,arestas[i].getV2());
    
        if(v1 != v2){
            // entra apenas se nao houver ciclo
            arvore.push_back(arestas[i]);
            Union(pai,v1,v2);
            limite = arestas[i].getPeso();
            if (limite > limiteTotal )
            limiteTotal = limite;
        }
    }
    for(int i = 0 ; i < V; i++){
        if(pai[i] == -1){
            componentes++;
        }
    }
    return limiteTotal;
}  
int main(){

    int r1 = 0, peso = 0, r2 = 0 , nCidades = 0, rodovias = 0,ri = 0 ,ri2=0,alcance = 0;
    cin >> nCidades;
    cin >> rodovias;
    while( nCidades != 0 || rodovias != 0){
        Grafo grafo(nCidades);
        for(int i = 0; i < rodovias; i++){
            cin >> r1;
            cin >> r2;
            cin >> peso;
            grafo.conexao(r1,r2,peso);
        }

        alcance = grafo.kruskal(ri);

        if(alcance >> 0 && grafo.componentes == 1){
            cout << alcance <<endl;
        }else
            cout << "Impossible" << endl;

        alcance = 0;
        cin >> nCidades;
        cin >> rodovias;
    }
    return 0;
}
