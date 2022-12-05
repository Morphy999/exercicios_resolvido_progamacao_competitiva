#include <bits/stdc++.h>

using namespace std;

int F[1005][35];
int n, x, value;
int Produto[1005][2];
int t;

int Mochila(int i, int j)
{
    if (F[i][j] < 0)
    {
        if (j < Produto[i - 1][1])
            value = Mochila(i - 1, j);
        else
        {
            value = max(Mochila(i - 1, j), Produto[i - 1][0] + Mochila(i - 1, j - Produto[i - 1][1]));
        }
        F[i][j] = value;
    }
    return F[i][j];
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> Produto[i][j];
            }
        }
        for (int i = 0; i < 1005; i++)
        {
            for (int j = 0; j < 35; j++)
            {
                if(i == 0 or j == 0) F[i][j] = 0;
               else  F[i][j] = -1;
            }
        }

        int m;
        cin >> m;
        int valor = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            valor += Mochila(n, x);
        }

        cout << valor << endl;
    }

    return 0;
}