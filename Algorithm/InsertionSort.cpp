  #include <iostream>
  using namespace std;

  void insertion_sort(int s[],int n);



  
  int main()
  {
      int n;
      cin >> n;

    int a[n];
 for(int i = 0; i < n;i++){
     cin >> a[i];
 }
 insertion_sort(a,n);
 
 for(int i = 0;i < n;i++){
     cout << a[i] << " ";
 }
  
  
  return 0;
  } 


   void insertion_sort(int s[],int n){

       for(int i = 1; i < n;i++){
           int j = i;
           while((j>0) && (s[j] < s[j-1])){
                  int aux = s[j-1];
                  s[j-1] = s[j];
                  s[j]  = aux;
                  j -= 1;
           }
       }

  }
