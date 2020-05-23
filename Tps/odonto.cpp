#include<iostream>

using namespace std;

int main(){
    int n = 0, cc1 = 0,cc2 = 0;
    cin >> n ;
    string a = "", b = "";
    for(int i = 0 ; i < n ; i++){
        cin >> a >> b ;
        for(int j = 0 ; j < a.length() ; j++){
            for(int z = 0 ; z < a.length() ; z++){
                if( a.length() > 1 ||  a.length() > 1){
                    if(a[z] != a[j]){
                        cc1++;
                    }
                    if(b[z] != b[j]){
                        cc2++;
                    }
                }else if( a.length() == 1 &&  a.length() == 1){
                    cc1 = cc2++;
                }else{
                   cc1 = -1;
                }
            }
        }
        cc1 == cc2 ? cout << "s"<< endl : cout << "n" << endl;
    }
    return 0;
}