#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
int n;
cin >> n;
int x,y,x1,y1;
char a,a1;
int gol1 = 0,gol2 = 0;
int cont1 = 0,cont2= 0;
for(int i = 1;i <= n;i++){
    cin >> x >> a >> y;
    cin >> y1 >> a1 >> x1;
 gol1 = 0;
 gol2 = 0;
 cont1 = 0;
 cont2= 0;



if(x > y){
    cont1 += 3;
}
if(x1 > y1)
    cont1 += 3;

 if(x == y){
    cont1 += 1;
    cont2 += 1;
}

 if(x1 == y1){
    cont1++;
    cont2++;
}

 if(y > x )
   cont2 += 3;


 if(y1 > x1)
    cont2+=3;


if(cont1 == cont2){
        gol1 += x1;
        gol2 += y;
        if(gol1 == gol2){
             cout << "Penaltis" << endl;
        }
        else if(gol1 > gol2){
            cout << "Time 1" << endl;
        }
        else 
            cout << "Time 2" << endl;


}

else if(cont1 > cont2 ){
    cout << "Time 1" << endl;
}
else 
   cout << "Time 2" << endl;

}


return 0;
}