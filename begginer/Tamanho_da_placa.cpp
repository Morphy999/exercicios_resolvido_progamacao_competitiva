#include <iostream>
#include <cmath>
using namespace std;



int main(){


int x,y,n;


while(cin >> x >> y >> n){

int a[n];
int b[n];


for(int i =0;i < n;i++){

  cin >> a[i] >> b[i];
   
 if(a[i] <= x and b[i]<= y )
  cout << "Sim" << endl;

else if(a[i] == y and b[i] == x or (a[i] <= y and b[i] <= x))
   cout << "Sim" << endl;

else 
   cout << "Nao" << endl;



}
}


return 0;
}