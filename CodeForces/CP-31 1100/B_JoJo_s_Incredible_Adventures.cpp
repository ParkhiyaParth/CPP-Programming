#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    string ss;
    cin >> ss;
    ll n = ss.length();
    ll cnt = 0, s = 0, mx = 0;
    int flag = 1;
    for (ll i = 0; i < n; i++)
    {
        if (ss[i] == '1')
        {
            cnt++;
        }
        else
        {
            if (flag)
            {
                flag = 0;
                s = cnt;
            }
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    ll e = cnt;
    mx = max(mx, s + e);
    if (flag)
    {
        cout << (ll)n * n << endl;
    }
    else
    {
        ll r = (mx - 1) / 2;
        ll ans = (mx - r) * (r + 1);
        cout << ans << endl;
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