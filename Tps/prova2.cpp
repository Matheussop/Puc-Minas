#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
// Para resolver a questao basta dividir o perimetro pelo mdc dos valores
int main(){
    int f1 = 0, f2 = 0, n = 0;
    cin >> n ;
    for(int i = 0; i < n ; i ++){
        cin >> f1 >> f2;
        int max = __gcd(f1,f2); //faz o mds dos dois valores
        cout << max << endl;
    }
    return 0;
}