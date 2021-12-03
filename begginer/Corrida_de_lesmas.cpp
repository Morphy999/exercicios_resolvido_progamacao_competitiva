#include <iostream>
#include <cmath>
using namespace std;


int main(){

int n;
while(cin >> n){
    int a[n];
    int maior = 0;
    for(int i =0;i < n;i++){
        cin >> a[i];
        if(a[i] > maior){
            maior =  a[i];
        }

    }

if(maior >= 20){
    cout << 3 << endl;
}
else if (maior >= 10 and maior < 20){
    cout << 2 << endl;
}

else 
   cout << 1 << endl;
}
    return 0;
}