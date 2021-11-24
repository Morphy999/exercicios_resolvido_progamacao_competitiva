#include <iostream>
#include <cstring>
using namespace std;


int main(){

int n;
cin >> n;
while(n != 0){

   int m;
   cin >> m;
   int a[m],cont = 0;
   int p[m];
   for(int i =0; i< m;i++){
       cin >> a[i];
       if(a[i]%2 !=0){
           p[cont] = a[i];
           cont++; 
       }
   }
       for(int i = 0;i < cont - 1;i++){
           for(int j = 0; j < cont - 1;j++){
               if(p[j] > p[j+1]){
                   int aux = p[j];
                   p[j] = p[j+1];
                   p[j+1] = aux;
               }
           }
       }
int x = cont - 1;
int y;
for(int i = x ;i >= cont/2;i--){
    if(i == cont/2 and cont%2 != 0){
        cout << p[i];
    }
    else {
    y = x - i;
    if(i == cont/2){
    cout << p[i] << " " << p[y];
    }
    else
       cout << p[i] << " " << p[y] << " ";
}
}


cout << endl;




 n--;   
}

return 0;

}