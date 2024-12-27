#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n, k, eve = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            eve++;
        }
    }
    int d = k - 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % k == 0)
        {
            d = 0;
        }
        else
        {
            d = min(d, k - v[i] % k);
        }
    }
    if (k != 4)
    {
        cout << d << endl;
    }
    else
    {
        if (eve >= 2)
        {
            cout << 0 << endl;
        }
        else if (eve == 1)
        {
            cout << min(d,1) << endl;
        }
        else if (eve == 0)
        {
            cout << min(2,d) << endl;
        }
    }
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