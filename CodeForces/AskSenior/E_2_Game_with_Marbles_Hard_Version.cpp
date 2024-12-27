#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<ll, ll>> vp;
    for (ll i = 0; i < n; i++)
    {
        vp.push_back(make_pair(a[i] + b[i], i));
    }
    sort(vp.rbegin(), vp.rend());
    ll turn = 0;
    for (ll i = 0; i < n; i++)
    {
        if (turn % 2 == 0)
        {
            a[vp[i].second] -= 1;
            b[vp[i].second] = 0;
        }
        else
        {
            a[vp[i].second] = 0;
            b[vp[i].second] -= 1;
        }
        turn++;
    }
    ll suma = 0, sumb = 0;
    for (ll i = 0; i < n; i++)
    {
        suma += a[i];
        sumb += b[i];
    }
    cout << suma - sumb << endl;
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