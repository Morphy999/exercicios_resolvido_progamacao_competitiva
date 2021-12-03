#include <iostream>
#include <cmath>
using namespace std;


int main(){

int a[4];

for(int i = 0; i < 4;i++){
    cin >> a[i];
}
bool tri = false;
for(int i = 0;i < 2;i++){
    for(int j = i+1;j < 3;j++){
        for(int h = j+1;h < 4;h++){
             if((a[i] < a[j] + a[h]) and (a[j] < a[i] + a[h] ) and (a[h] < a[j] + a[i])){
              tri = true;
             }
        } 
    }
}

if(tri == false){
    cout << "N" << endl;
}
else  
    cout << "S" << endl;

    return 0;
}