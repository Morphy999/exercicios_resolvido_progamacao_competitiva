#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int x = 100;
double a[x];

for(int i =0;i < x;i++){
    cin >> a[i];
}

for(int i = 0;i < x;i++){
    if(a[i] <= 10){
        cout << "A[" << i << "] =" << " " << fixed << setprecision(1) << a[i] << endl;
    }
}


    return 0;
}