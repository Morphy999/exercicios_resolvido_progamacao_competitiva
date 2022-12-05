#include <bits/stdc++.h>

using namespace std;
string s, ps;
auto listAdj = vector<vector<int>>(30, vector<int>(0));
bitset<30> apareceu,visitou;
vector<int> ordem;

    void dfs(int u){
            visitou.set(u);

            for(int i = 0;i < listAdj[u].size();i++){
                int x = listAdj[u][i];
                if(!visitou[x]) dfs(x);
            }
    ordem.push_back(u);
    }



int main()
{

    cin >> ps;
    while (cin >> s && s[0] != '#')
    {
        for (int i = 0; i < s.size() && i < ps.size(); i++)
        {
            if (ps[i] != s[i])
            {
                apareceu.set(ps[i] - 'A');
                apareceu.set(s[i] - 'A');
                listAdj[ps[i] - 'A'].push_back(s[i] - 'A');
                break;
            }
        }
    ps = s;
    }

for(int i = 0;i < 26;i++){
    if(!visitou[i] && apareceu[i]){
        dfs(i);
    }
}

for(int i = ordem.size()-1;i>= 0;i--){
    char c = ordem[i] + 'A';
    cout << c;
}
cout << endl;



}