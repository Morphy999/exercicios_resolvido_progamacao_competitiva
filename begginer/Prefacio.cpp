
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    
   int a,b,r,q;
   cin >> a >> b;
   
   
r = a%b;
q = a/b;                                                                   
if (r < 0){                               
    r = r +  abs(b);
    q = (a-r)/b;
}


if(r <= abs(b))
    cout << q << " " <<  r << endl;

    
    return 0;
}
