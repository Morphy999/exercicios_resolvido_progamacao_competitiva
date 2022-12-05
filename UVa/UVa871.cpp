#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<string> &m, int &cont)
{
    if (i < 0 or j < 0 or i >= m.size())
        return;

    if (m[i][j] == '1')
    {
        m[i][j] = '0';
        cont++;
    }
    else
        return;

    dfs(i + 1, j, m, cont);

    dfs(i + 1, j + 1, m, cont);

    dfs(i + 1, j - 1, m, cont);

    dfs(i, j + 1, m, cont);

    dfs(i - 1, j + 1, m, cont);

    dfs(i - 1, j, m, cont);

    dfs(i - 1, j - 1, m, cont);

    dfs(i, j - 1, m, cont);
}

int main()
{

    int n;
    cin >> n;
    cin.ignore();
    cin.ignore();
    while (n--)
    {
        vector<string> m;
        string L;
        while (getline(cin, L) && (!L.empty()))
        {
            m.push_back(L);
        }

        int maxx = 0;
        for (int i = 0; i < m.size(); i++)
        {
            for (int j = 0; m[i][j]; j++)
            {
                int cont = 0;
                dfs(i, j, m, cont);
                maxx = max(maxx, cont);
            }
        }

        cout << maxx << endl;
        if (n)
            puts("");
    }

    return 0;
}