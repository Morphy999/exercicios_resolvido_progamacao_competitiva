 #include <iostream>
 #include <cmath>
 #include <cstring>
 using namespace std;

int main(){

int n;
cin >> n;
int x;
char a[21];
for(int i = 0;i < n;i++){
    cin >> x >> a;
int y = strlen(a);
long long int total = x;
int  w = y;
while((x - y) >= 1){
  total *= (x - y);
  y += w;
}
cout <<  total    << endl;
}
    return 0;
}