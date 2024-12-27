#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int f1 = 0;
    int f2 = 0;
    int ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == -1)
        {
            f1++;
        }
        else
        {
            f2++;
        }
    }
    if (f1 <= f2)
    {
        if (f1 % 2 != 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if (f1 > f2)
        {
            ans = f1 - (n / 2);
        }
        if ((n / 2) % 2 != 0)
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << ans << endl;
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