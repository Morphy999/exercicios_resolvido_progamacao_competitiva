#include <bits/stdc++.h>

using namespace std;
bitset<110> descoberto;
int n,m,x,y;
vector<int> ordem;
auto listAdj = vector<vector<int>>(101,vector<int>(0));

void dfs(int u){
    descoberto.set(u);
    for(auto it = listAdj[u].begin();it != listAdj[u].end();it++){
        int v = *it;
        if(!descoberto[v]){
            dfs(v);
        }
    }     
    ordem.push_back(u);
}

int main(){

while(cin >> n >> m && (n!=0 or m!=0)){


    for(int i =0;i < m;i++){
            cin >> x >> y;
            listAdj[x].push_back(y);
        }
    

for(int i = 1;i <= n;i++){
    if(!descoberto[i]) dfs(i);
}


for(int i = ordem.size()-1;i>=0;i--){
    cout << ordem[i] << " ";
}
cout << endl;
listAdj.clear();
ordem.clear();
descoberto.reset();
}
    return 0;
}