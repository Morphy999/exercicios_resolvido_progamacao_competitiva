#include <bits/stdc++.h>
using namespace std;

void ContRoman(int &i, int &v, int &x, int &l, int &c, int n)
{

    while (n != 0)
    {

        if (n >= 100)
        {
            n -= 100;
            c++;
        }
        else if (n < 100 && n >= 90)
        {
            n -= 90;
            x++;
            c++;
        }
        else if (n >= 50)
        {
            n -= 50;
            l++;
        }
        else if (n < 50 && n >= 40)
        {
            n -= 40;
            x++;
            l++;
        }
        else if (n >= 10)
        {
            n -= 10;
            x++;
        }
        else if (n == 9)
        {
            n -= 9;
            x++;
            i++;
        }
        else if (n >= 5)
        {
            n -= 5;
            v++;
        }
        else if (n == 4)
        {
            n -= 4;
            v++;
            i++;
        }
        else if (n >= 1)
        {
            n-= 1;
            i++;
        }
    }
    return;
}

int main()
{

    int n;
    while (cin >> n && n != 0)
    {
        int i, v, x, l, c;

        i = v = x = l = c = 0;

 for(int j = 1;j <= n;j++)
        ContRoman(i, v, x, l, c, j);



        cout << n << ":"
             << " " << i << " "
             << "i,"
             << " " << v << " "
             << "v,"
             << " " << x << " "
             << "x,"
             << " " << l << " "
             << "l,"
             << " " << c << " "
             << "c" << endl;
    }

    return 0;
}