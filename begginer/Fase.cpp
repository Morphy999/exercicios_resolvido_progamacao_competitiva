#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main ()
{
int n,k;
cin >> n >> k;          
int a[n];

for(int i = 0;i < n;i++){
    cin >> a[i];
}
sort(a,a+n);
int cont1 = 1;
int cont2 = 0;
for(int i = n - 1;i >= 0;i--){
     if( cont1 == k and cont2 == 0){
         for(int j = i - 1; j>=0;j--){
             if(a[i] == a[j]){
                 cont1++;
             }
             else {
                cont2++;
               break;
         }
         }
     }
     else if(cont1 < k)
      cont1++;  

}



cout << cont1 << endl;

    return 0;
}