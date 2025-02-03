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
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cnt++;
        }
    }
    if (cnt >= 2)
    {
        cout << "NO" << endl;
        // return;
    }
    else if (cnt == 0)
    {
        cout << "YES" << endl;
        // return;
    }
    else
    {
        ll mx = 0;
        ll mn = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                mx = b[i] - a[i];
            }
            else
            {
                mn = min(mn, a[i] - b[i]);
            }
        }
        if (mx <= mn)
        {
            cout << "YES" << endl;
            // return;
        }
        else
        {
            cout << "NO" << endl;
            // return;
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