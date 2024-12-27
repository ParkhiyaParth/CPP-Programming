#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int sz = s.size();
    int cb = 0, maxi = 0;
    int ind = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            cb++;
        }
        // if (s[i] == 'W')
        // {
        //     cb = 0;
        // }
        // if (maxi < cb)
        // {
        //     maxi = cb;
        //     ind = i;
        // }
    }
    int ans = cb;
    for (int i = k; i < n; i++)
    {
        if (s[i] == 'W')
        {
            cb++;
        }
        if (s[i - k] == 'W')
        {
            cb--;
        }
        ans = min(ans, cb);
    }
    cout << ans << endl;
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