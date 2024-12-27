#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> dmin(n);
    vector<ll> dmax(n);
    list<ll> ls;
    ll bptr = n - 1;
    for (ll i = n - 1; i >= 0; i--)
    {
        while (bptr >= 0 && b[bptr] >= a[i])
        {
            ls.push_back(b[bptr]);
            bptr--;
        }

        dmin[i] = ls.back() - a[i];
        dmax[i] = ls.front() - a[i];

        ll au = n - i;
        ll bu = n - (bptr + 1);

        if (au == bu)
        {
            ls.clear();
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dmin[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << dmax[i] << " ";
    }
    cout << endl;
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