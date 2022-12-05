#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);

int main()
{

    int n, R;
    while (cin >> R >> n)
    {

        double t = PI * (n - 2) / n;
        double r = (R * (1 + cos(0.5 * t)) - R) / (1 + cos(0.5 * t));
        double s = 0.5 * n * r * r * t;
        double p = r * n * sqrt(pow((R - r), 2) - r * r);
        double b = p - s;
        double g = PI * n * r * r;
        double gr = PI * R * R - g - b;
        if (n == 1)
        {
            r = R;
            b = 0;
            gr = 0;
        }

        cout.precision(10);
        cout << fixed << r << " " << b << " " << gr << endl;
    }
    return 0;
}