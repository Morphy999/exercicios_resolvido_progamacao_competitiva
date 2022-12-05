#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
void Sort(int tamanho,int v[]);
void SortSubVector(int low,int high,int v[]);
void MergeSort(int left,int middle1,int middle2,int right,int v[],int tam);


int main(){

int n;
cin >> n;
int vec[n];

for(int i = 0;i < n;i++){
  vec[i] = (10 + rand() % 90);
}
cout << "Sem Ordernar:" << endl;
for(int i = 0;i < n;i++){
    
    cout << vec[i] <<  " ";
}

Sort(n,vec);
cout << endl;
cout << "Ordenado:" << endl;

for(int i = 0;i < n;i++){
    cout << vec[i] << " ";
}


    return 0;
}



void Sort(int tamanho,int v[]){
    SortSubVector(0,tamanho-1,v);
}


void SortSubVector(int low,int high,int v[]){

    int tam = high + 1;
    if(high - low >= 1){
        int middle1 = (high + low)/2;
        int middle2 = middle1 + 1;

     SortSubVector(low,middle1,v);
     SortSubVector(middle2,high,v);

     MergeSort(low,middle1,middle2,high,v,tam);

    }
}


void MergeSort(int left,int middle1,int middle2,int right,int v[],int tam){

   int leftIndex = left; 
   int rightIndex = middle2; 
   int combinedIndex = left; 
   vector<int>combined(tam);
     while(leftIndex <= middle1 and rightIndex <= right){
         if(v[leftIndex] <= v[rightIndex]){
             combined[combinedIndex++] = v[leftIndex++]; 
             //leftIndex++;
             //combinedIndex++;
         }
         else  
           combined[combinedIndex++] = v[rightIndex++];
     }
     if(leftIndex == middle2){
         while(rightIndex <= right)
               combined[combinedIndex++] = v[rightIndex++];
     }
     else{
         while(leftIndex <= middle1)
            combined[combinedIndex++] = v[leftIndex++];
     }

     for ( int i = left; i <= right; i++ ) 
        v[i] = combined[i]; 
}
