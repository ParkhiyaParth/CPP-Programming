#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (int it = 0; it < 2; it++)
    {
        vector<bool> was(n + 1, false);
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
            if (was[a[i]])
            {
                mx = max(mx, a[i]);
            }
            was[a[i]] = true;
            a[i] = mx;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * (n - i);
    }
    cout << ans << '\n';
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