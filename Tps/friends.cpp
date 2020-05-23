#include <iostream>

using namespace std;

int cc = 1;
int visitados[100];
int matriz[100][100];
int pi[100];

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
    void conexao(int v1,int v2);
    void dfs(int v);//Faz dfs apartir de um vertiice
    void dfsvisit(int v); // Olhar os vizinhos de v
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
    int visitados[V];
    int pi[V];
}
void Grafo::conexao(int v1,int v2){
    matriz[v1][v2] = 1;
    matriz[v2][v1] = 1;
}
void iniciarVetor(int vetor[], int n){
       for(int i = 0;i < n ;i++){
        vetor[i] = 0; 
    } 
}
void Grafo::dfs(int v){
    int resp  = 0;
    iniciarVetor(visitados,V);
    for(int i  = 0 ; i < V ; i++){
        if(visitados[i] == 0){
            dfsvisit(i);
        }
        if(cc > resp){
            resp = cc;
        }
        cc = 1;
    }
    cout << resp << endl;
}

void Grafo::dfsvisit(int v){
    visitados[v] = 1; // 1 representa a cor cinza
    for(int i = 0; i < V ; i++){
        if(matriz[v][i] && visitados[i] == 0 ){
            dfsvisit(i);
            cc++;
        }
    }
    visitados[v] = 2; // 2 representa a cor preta
}
int main(){
    int n = 0 , cid = 0, p = 0, a = 0, b = 0, resp = 0; //sendo n o numero de testes a serem feitos, cid o numero de cidades, p o numero de pares de pessoas em cada cidade, a e b um par de amigos
    int aux = 0;
    cin >> n ;
    for(int i = 0 ; i < n ;i++){
        cin >> cid; 
        cin >> p;
        Grafo grafo(cid); 
        for(int j = 0 ; j < p ; j++){
            cin >> a;
            cin >> b;
            grafo.conexao(a-1,b-1);
        }
        for(int j = 0; j < p; j++){
            visitados[i] == 0;
        }
        grafo.dfs(0);
        grafo.zerarMatriz();
    }
    return 0;
}
/* -- Metodos usados para Dbug
void Grafo::mostrarMatriz(){
    for(int i=0;i < V;i++){
        for(int j = 0;j < V;j++){
            cout << matriz[i][j] << " | " ;
        }
        cout << endl;
    }
}







/*

   //Variaveis globais//
    int matrizadj[100][100]; //Alocando a matriz com tamanho 100 100
    int componetes = 0;      
    int visitados[100]; //Vetor usado para ver qual vertice ja foi
    int pi[100];
    //-----------------//
    
void saida(int i){
    cout << (char)(i+97) << ","; //Transformado os vertices em Letras 
}

class Grafo{
    public:
    //Variaveis da classe//
    int V; // numero de vertices do grafo 
    //-------------------//

    //Contrutores da classe//
    Grafo(){
        this->V = 1;
    }
    Grafo(int v);
    //--------------------//

    //Metodos da classe//
    void criarMatriz(int v); //criar a matriz 
    void conexao(int v1,int v2); //Criar uma conexao entre os dois vertices (aresta)
    void dfs(int v);//Faz dfs apartir de um vertiice
    void dfsvisit(int v); // Olhar os vizinhos de v
    void mostrarMatriz(); //Printa a matriz na tela , apenas para debugar o codigo .
    void zerarMatriz(); //Coloca 0 em toda a matriz
    //int adjVertice(int v);
    //-----------------//
};

Grafo::Grafo(int v){
    this->V = v;
    criarMatriz(v);
}
void Grafo::zerarMatriz(){
    for(int i=0;i < V;i++){
        for(int j = 0;j < V;j++){
            matrizadj[i][j] = 0;
        }
    }
}
void Grafo::mostrarMatriz(){
    for(int i=0;i < V;i++){
        for(int j = 0;j < V;j++){
            cout << matrizadj[i][j] << " | " ;
        }
        cout << endl;
    }
}
void Grafo::criarMatriz(int v){
    int matrizadj[v][v];
    int visitados[V];
    int pi[V];
}

void Grafo::conexao(int v1,int v2){
    matrizadj[v1][v2] = 1;
    matrizadj[v2][v1] = 1;
}
void iniciarVetor(int vetor[], int n){
       for(int i = 0;i < n ;i++){
        vetor[i] = 0; 
    } 
}
void Grafo::dfs(int v){
    iniciarVetor(visitados,V);
    componetes = 0;
    for(int i  = 0 ; i < V ; i++){
        if(visitados[i] == 0){
            iniciarVetor(pi,V);
            dfsvisit(i);
            for(int i = 0 ; i < V ; i++){
                if(pi[i] == 1)
                saida(i);
            }
            cout << endl;
            componetes = componetes + 1;
        }
    }
    cout << componetes << " connected components" << endl << endl;
}

void Grafo::dfsvisit(int v){
    visitados[v] = 1; // 1 representa a cor cinza
    pi[v] = 1;
    for(int i = 0; i < V ; i++){
        if(matrizadj[v][i] && visitados[i] == 0 ){
            dfsvisit(i);
        }
    }
    visitados[v] = 2; // 2 representa a cor preta
}

*/