#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
int h,m;
while(cin >> h >> m){
int x = h/30;
int y = m/6;

cout << setfill('0') << setw(2) << x << ":" << setfill('0')  << setw(2)<< y << endl;



}
return 0;
}