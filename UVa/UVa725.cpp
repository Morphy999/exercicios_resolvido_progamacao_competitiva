    #include <bits/stdc++.h>
    using namespace std;

    bool solve(int num,int i){
        set<int> a;
        if(num >= 100000){
            return false;
        }
        for(int k = 0;k < 5;k++){
                int c = i%10;
                int d = num%10;
                i /=10;
                num /=10;
                a.insert(c);
                a.insert(d);
        }
        if(a.size() < 10) return false; 

    return true;
    }



    int main(){

    int n,cont = 0;


    while(cin >> n && n != 0){
          bool found = false,f = false;
    cont++;
    if (cont > 1)
                printf("\n");


    for(int i = 1234;i <= 98765;i++){
        int num = i*n;

        found  = solve(num,i);

        if(found){
            printf("%05d / %05d = %d\n", num, i, n);
        f = true;
        }

    }


    if(!f){
        
            cout << "There are no solutions for " << n << "."<< "\n";
    }


    }



        return 0;
    }


