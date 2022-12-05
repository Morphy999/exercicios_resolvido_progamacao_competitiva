#include <bits/stdc++.h>

using namespace std;

vector<bool> num;

const int MAX = 524289;
const int SIZE = 1048575;
bool tree[SIZE];
int answers[21][MAX];

int solve(int init,int fim,int node)
{
if(init == fim) return node;

if(!tree[node]){
    tree[node] = true;
    return solve(init+1,fim,node*2 +1);
}


    tree[node] = false;
    return solve(init+1,fim,node*2+2);
}

int main()
{
int t,d,l;
    for(int i = 2;i <= 20;i++){
        memset(tree,false,sizeof(tree));
        for(int j = 1; j < MAX;j++){
            answers[i][j] = solve(1,i,0) + 1;
        }
    }


cin >> t;
while(cin >> d >> l){
    cout << answers[d][l] << "\n";
}

    return 0;
}