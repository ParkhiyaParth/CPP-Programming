#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sqd(ll x1, ll y1, ll x2, ll y2)
{
    ll d1 = x2 - x1;
    ll d2 = y2 - y1;
    return d1 * d1 + d2 * d2;
}
void solve()
{
    ll n;
    cin >> n;
    ll xs, ys, xt, yt;
    vector<pair<ll, ll>> vp(n);
    for (int i = 0; i < n; i++)
    {
        // ll x, y;
        cin >> vp[i].first >> vp[i].second;
    }
    cin >> xs >> ys >> xt >> yt;
    ll dis = sqd(xs, ys, xt, yt);
    bool reach = false;
    for (ll i = 0; i < n; i++)
    {
        if (dis >= sqd(vp[i].first, vp[i].second, xt, yt))
        {
            reach = true;
            break;
        }
    }
    if (reach)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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