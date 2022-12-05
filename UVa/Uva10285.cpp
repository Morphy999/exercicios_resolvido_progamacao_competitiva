#include <bits/stdc++.h>
using namespace std;

int ma[101][101];
int armazena[101][101];
int r, c, cont;
const int addx[] = {0, 0, 1, -1};
const int addy[] = {1, -1, 0, 0};
#define tx i + addx[w]
#define ty j + addy[w]

int Dist(int i, int j)
{
    if (armazena[i][j] >= 0)
        return armazena[i][j];
    for (int w = 0; w < 4; w++)
        if (tx >= 0 && tx < r && ty >= 0 && ty < c && ma[tx][ty] < ma[i][j]){
           armazena[i][j] = max(armazena[i][j], Dist(tx, ty));
        }
    return ++armazena[i][j];
}

int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s >> r >> c;
        cont = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> ma[i][j];
                armazena[i][j] = -1;
            }
        }
        int maxx = INT_MIN;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                maxx = max(maxx, Dist(i, j));
            }
        }
        cout << s << ":"
             << " " << maxx+1 << endl;
    }

    return 0;
}