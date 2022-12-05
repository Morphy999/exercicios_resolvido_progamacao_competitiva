#include <bits/stdc++.h>

using namespace std;

double hip(double a,double b){
    return sqrt(a*a + b*b);
}




int main(){
int n;
cin >> n;
while(n--){
  int l,w,o;
  cin >> l >> w >>o;
   double angle = 2*acos(0)*o/180.0;
   if(angle == 0) cout << "1.000" << endl;
   else{
    double contl=0;
   double x =  w/tan(angle);
   int k = 1;
   while(x*k <= l) k++;
   double y = l-(x*(k-1));
   double h;
   if(k%2==0) h = w - y*tan(angle);
   else h = y*tan(angle);
   double s = y/cos(angle);
   contl+=s;
   contl += w/sin(angle)*(k-1);

cout.precision(3);
cout << fixed << contl/(hip(h,l)) << endl;
   }
}



    return 0;
}