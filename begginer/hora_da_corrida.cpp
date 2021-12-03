#include <iostream>
#include <cmath>
using namespace std;

int main (){
int v,n;
cin >> v >> n;
int a[9]; 
                    // como de todo modo estava dando time limit,foi necessario fazer deste modo.
cout << int( ceil(n*v*1/(10.0))) << " " << int( ceil(n*v*2/(10.0))) << " " << int(ceil(n*v*3/(10.0))) << " " << int( ceil(n*v*4/(10.0))) << " " << int( ceil(n*v*5/(10.0))) << " " << int( ceil(n*v*6/(10.0))) << " " << int( ceil(n*v*7/(10.0))) << " " << int( ceil(n*v*8/(10.0))) << " " << int( ceil(n*v*9/(10.0))) << endl;
 
return 0;
}