#include <iostream>


using namespace std;



int main(){

int n;
while(cin >> n){
    int a[n];
    double t[n],d[n];
    double vm = 0;
    int cont = 1;
    for(int i =1; i <= n;i++){
        cin >> t[i] >> d[i];
        if(d[i]/t[i] > vm){
            vm = d[i]/t[i];
            a[cont] = i;
            cont++;
        }
    }
for(int i = 1;i < cont;i++){
    cout << a[i] << endl;
}
}
    return 0;
}