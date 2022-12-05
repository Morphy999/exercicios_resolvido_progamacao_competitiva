#include <bits/stdc++.h> 
using namespace std;

int k;


int cont(int n,int b){
   if(n == 0) return 0;    

    return n+cont(((n+b)/k),(n+b)%k);
   
}

int main(){
int n;

while(cin >> n >> k){
 
    cout << cont(n,0) << endl;
}


    return 0;
}