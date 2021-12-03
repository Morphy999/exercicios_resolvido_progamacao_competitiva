 #include <iostream>
 using namespace std;

int main(){

int n;
cin >> n;
int x;
for(int i = 0;i < n;i++){
    cin >> x;
    int total = 0;
   for(int j = 1;j <= x;j++){
       if(j <= 2){
         total += 2;
       }
       else 
         total += j;
   }
    cout << total << endl;   
}
    return 0;
}