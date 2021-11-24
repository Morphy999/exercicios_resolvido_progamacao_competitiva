#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
int t;

while(cin >> t and t != 0){
        int a[3];
        int x;
        for(int i = 0;i < t;i++){
            int a[3];
            cin >> x;
            a[0] = 1;
            x -= 1;
            if(x%2 != 0){
                a[2] = 1;
                x -=1;
                a[1] = x;
            }
            else{
                 a[2] = 0;
                 a[1] = x;
            }

  cout << a[0] * 1 + a[1] * 2 + a[2] * 1 << endl;
        }
}







    return 0;
}