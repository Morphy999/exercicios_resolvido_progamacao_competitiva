#include <iostream>
#include <cmath>
using namespace std;



int main()
{

long long int n,p;
cin >> n;


p = 1 + ((n*(n-1))/2) + ((n*(n-1)*(n-2)*(n-3))/24);
 
cout << p << endl;



return 0;
}