#include <bits/stdc++.h>
using namespace std;

int n;
int nums[1005];

int main()
{
    int cont = 1;
    while (cin >> n && n != 0)
    {
    {

        set<int> sums;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            for (int j = 0; j < i; j++)
            {
                if (nums[j] != nums[i])
                    sums.insert(nums[j] + nums[i]);
            }
        }
        int q;
        cin >> q;
        cout << "Case " << cont++ << ":" << endl;
        while (q--)
        {

            int x, best;
            cin >> x;

            set<int>::iterator it = sums.lower_bound(x);

            if (it == sums.begin())
            {
                best = *it;
            }
            else if (it == sums.end())
            {
                --it;
                best = *it;
            }
            else
            {
                best = *it;
                --it;
                if (abs(best - x) > abs(*it - x))
                    best = *it;
            }

            cout << "Closest sum to"
                 << " " << x << " "
                 << "is"
                 << " " << best
                 << "." << endl;
        }
    }
    return 0;
}