#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int diff = 1e9;
    bool sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 0)
        {
            diff = min(v[i] - v[i - 1], diff);
            sorted &= v[i] >= v[i - 1];
        }
    }
        if (!sorted)
        {
            cout << 0 << endl;
            return;
        }
        cout << diff / 2 + 1 << endl;
    }

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}