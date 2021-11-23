#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

double w[2];
double a,b,c;
cin >> w[0] >> w[1] >> w[2];

sort(w,w+3);
c= w[0];
b = w[1];
a = w[2];

if(a >= (b+c)){
   cout << "NAO FORMA TRIANGULO" << endl;
}
else {
      if(pow(a,2) == (pow(b,2) + pow(c,2))){
           cout << "TRIANGULO RETANGULO" << endl;
         
      }
       else if(pow(a,2) > (pow(b,2) + pow(c,2)))
        cout << "TRIANGULO OBTUSANGULO" << endl;
      
      else if (pow(a,2) < (pow(b,2) + pow(c,2)))
          cout << "TRIANGULO ACUTANGULO" << endl;

 if(a == b and b == c ){
        cout << "TRIANGULO EQUILATERO" << endl;
           }
 if((a == b and a != c ) or (b == c and b != a) or (a == c and a != b))
       cout << "TRIANGULO ISOSCELES" << endl;


}


return 0;


}