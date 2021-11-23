#include <iostream>
#include <cstring>
using namespace std;


int main(){
int n;
cin >> n;
char placa[110];
int w;
for(int i = 0;i < n;i++){
cin >> placa;
if (!(strlen(placa) == 8 && isupper(placa[0]) && isupper(placa[1])
        && isupper(placa[2]) && placa[3] == '-' && isdigit(placa[4])
        && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]))){
            cout << "FAILURE" << endl;
        }
else{
    switch(placa[7]){
        case '1':
        case '2':  
            cout << "MONDAY" << endl;
             break;
        case '3':
        case '4':
             cout << "TUESDAY" << endl;
              break;
        case '5':
        case '6':
              cout << "WEDNESDAY" << endl;
              break;
        case '7':
        case '8':
             cout << "THURSDAY" << endl;
             break;
        case '9':
        case '0':
             cout << "FRIDAY" << endl;
             break;
}

}

}
return 0;

}