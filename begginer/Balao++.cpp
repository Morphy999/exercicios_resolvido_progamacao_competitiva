 #include <iostream>
 #include <cmath>
 using namespace std;
int main(){

                         //v = 4pi/3 * r^3;
int r,l;
cin >> r >> l;
const double pi = 3.1415;
double v = (4/3.0) * pi * pow(r,3);
cout << int(l/v) << endl;  

    return 0;
}