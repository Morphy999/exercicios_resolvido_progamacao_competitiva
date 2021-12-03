#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


int digitos (int a,int b){
int x;
x = int(floor(log10(pow(a,b)))+1);
    return x;
}

int main (){
int t;
cin >> t;
unsigned n,m;
unsigned short casos;
for(int i = 0;i < t;i++){
    cin >> n >> m;
    casos = digitos(n,m);
     cout << casos << endl;

}



return 0;
}