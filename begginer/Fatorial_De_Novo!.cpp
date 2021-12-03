 #include <iostream>
 #include <cstring>
 using namespace std;

int fatorial(int k){
   int total = 1;
  for(int i = k;i >= 1;i--){
      total *= i;
  }
   return total;
}
int main(){

char a[6];
while(cin >> a && a[0] != '0'){
   int x = strlen(a);
int numero = 0;
int y = x;
for(int i =0;i < x;i++){
    numero += (a[i] - '0' ) * fatorial(y);
    y--;

}

cout << numero << endl;

}

    return 0;
}