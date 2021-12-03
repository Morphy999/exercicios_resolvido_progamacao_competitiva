 #include <iostream>
 #include <cstring>
 using namespace std;

int main(){

int hi,mi,hf,mf;

cin >> hi >> mi >> hf >> mf;
int durouh,duroum;

if(hf > hi){
   durouh = hf - hi;
}


else{
    durouh = hf - hi + 24; 
}
if(mf >= mi){
          duroum = mf - mi;
      }
 else{
         durouh -= 1;
          duroum = mf + 60 - mi;
      }

if(durouh >= 24 and duroum > 0){
    durouh = 0;
}

cout << "O JOGO DUROU"  <<" " << durouh << " " << "HORA(S) E" << " " << duroum << " "  << "MINUTO(S)" << endl;

return 0;
}