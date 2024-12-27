#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, m;
    cin >> n >> m;

    ll mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll l;
        cin >> l;
        set<ll> s;
        for (ll j = 0; j < l; j++)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }
        ll rem = 0, f = -1;
        for (ll j = 0; j <= l + 1; j++)
        {
            if (!s.count(j) && f == -1)
            {
                f = 1;
            }
            else if (!s.count(j) && f != -1)
            {
                rem = j;
                break;
            }
        }
        mx = max(mx, rem);
    }

    ll cm = min(m + 1, mx + 1);
    ll ans = mx * cm;
    ll minus = m + 1 - cm;
    ll sum = cm * minus + (minus * (minus - 1) / 2);
    // int mex = 0;

    // for (int k = 0; k <= m; k++)
    // {
    //     while (s.count(mex))
    //     {
    //         mex++;
    //     }
    //     sum += mex;
    // }
    cout << ans + sum << endl;
}
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}