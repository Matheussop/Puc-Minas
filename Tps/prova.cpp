#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
// Para resolver a questao basta dividir o perimetro pelo mdc dos valores
int main(){
    int l1 = 0, l2 = 0,resp = 0;
    while(cin >> l1 >> l2){
        int denominador = __gcd(l1,l2); //faz o mds dos dois valores
        resp = (((l1+l1)+(l2+l2))/denominador); 
        cout << resp << endl;
    }
    return 0;
}