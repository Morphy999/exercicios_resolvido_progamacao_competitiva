#include <bits/stdc++.h>

using namespace std;

#define a 21

int n, x, somamax;
int t[a];
bool b[a];
bool tc[a];

void Track(int w)
{
    if (w == x)
    {
        int soma = 0;
        for (int i = 0; i < x; i++)
            if (tc[i])
                soma += t[i];
        if (soma <= n)
        {
            if (somamax < soma)
            {
                somamax = max(somamax, soma);
                for (int i = 0; i < x; i++)
                    b[i] = tc[i];
            }
        }
        return;
    }
    tc[w] = true;
    Track(w + 1);
    tc[w] = false;
    Track(w + 1);
}

int main()
{

    while (cin >> n)
    {
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> t[i];
            b[i] = false;
        }
        somamax = 0;
        Track(0);
        for (int i = 0; i < x; i++)
            if (b[i])
                cout << t[i] << " ";
        cout << "sum:" << somamax << endl;
    }
    return 0;
}