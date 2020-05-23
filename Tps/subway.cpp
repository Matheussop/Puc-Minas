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
    void conexao(int v1,int v2,int peso);
    int getPeso(int v1,int v2);
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
int main(){
    string nome = "",estacao1 = "", estacao2 = "",estacaoInicial = "";
    int indice = 0;
    int n = 0, l = 0, peso = 0, pesoCorrente = 0, preco = 0; // n = numero de estações, l = numero de ligações
    cin >> n;
    cin >> l;
    while( n != 0 && l != 0){
        Grafo grafo(n);
        map<string,int> vias;
        for(int i = 0; i < n; i++){
            cin >> nome;
            vias.insert(pair<string,int>(nome,i));
        }
        for(int i = 0; i < l; i++){
            cin >> estacao1;
            cin >> estacao2;
            cin >> peso;
            grafo.conexao(vias.at(estacao1),vias.at(estacao2),peso);
        }
        cin >> estacaoInicial;
            
        if(preco >> 0 && grafo.componentes == 1){
            cout << preco <<endl;
        }else
            cout << "Impossible" << endl;
        cin >> n;
        cin >> l;
    }
    return 0;
}
