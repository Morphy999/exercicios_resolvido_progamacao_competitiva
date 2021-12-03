#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main (){


int n;
while(cin >> n && n != 0){

int total = 0;
int x;
char a[30];
char b[3];
b[0] = 'm';
b[1] = 'a';
b[2] = 'n'; 
for(int i = 0;i < n;i++){
    cin >> x;
    cin.ignore();
    cin.getline(a,30);

    if(a[0] ==  's'){
        total += x*120;
    }
    else if(a[0] == b[0] && a[1] == b[1] && a[2] == b[2]){
        total += x *  56;
    }
    else if(a[0] == 'm'){
        total += x*85;
    }
    else if(a[0] == 'g'){
        total += x * 70;
    }
    else if(a[0] == 'l'){
        total += x*50;
    }
    else
       total += x * 34;
} 


if(total > 130 ){
    cout << "Menos" << " " << total - 130 << " " <<  "mg" <<  endl;
}

else if(total < 110){
    cout << "Mais" << " " << 110 - total << " " << "mg" << endl;
}
else 
   cout << total << " " << "mg" << endl;

}










    return 0;
}