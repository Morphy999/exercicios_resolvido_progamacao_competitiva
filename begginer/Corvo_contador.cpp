#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
int cont = 0;
int valor = 0;
while(cont != 3){
char a[8];
cin.getline(a,8);

if(a[0] == 'c'){
    cout << valor << endl;
    cont++;
    valor = 0;
}
else{
    if(a[0] == '*')
         valor += 4;
    if(a[1] == '*')
        valor += 2;
    if(a[2] == '*')
      valor += 1;

}



}




return 0;


}