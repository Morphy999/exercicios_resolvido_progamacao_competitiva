 #include <iostream>
 #include <cstring>
 #include <iomanip>
 using namespace std;

int main(){

double n;
while(cin >> n){
double y = (24 * n)/360;
double h,m,s;
int totals = 3600 * y;

h = totals/3600;
m = (totals%3600)/60;
s = ((totals%3600)%60);

h+= 6;
if(h >= 24){
    h -= 24;
}

if(s == 59){
    s = 0;
    m += 1;
}
if(n >= 0 and n < 90){
     cout << "Bom Dia!!" << endl;
     cout << setfill('0') << setw(2) << h <<   ":" << setw(2) <<  m <<":" << setw(2) <<   s << endl;
}
else if(n >= 90 and n< 180){
    cout << "Boa Tarde!!" << endl;
   cout << setfill('0') << setw(2) << h <<   ":" << setw(2) <<  m <<":" << setw(2) <<   s << endl;   
}
else if(n >= 180 and n < 270){
     cout << "Boa Noite!!" << endl;
      cout << setfill('0') << setw(2) << h   <<  ":" << setw(2) <<  m <<":" << setw(2) <<   s << endl;
}
else if(n >= 270 and n < 360){
     cout << "De Madrugada!!" << endl;
     cout << setfill('0') << setw(2) << h   <<  ":" << setw(2) <<  m <<":" << setw(2) <<   s << endl;
}

}


return 0;   



}