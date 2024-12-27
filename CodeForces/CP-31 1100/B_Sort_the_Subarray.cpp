#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll l = 1, r = n;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
    }
    for (ll i = l; i > 0; i--)
    {
        if (b[i] >= b[i - 1])
        {
            l--;
        }
        else
        {
            break;
        }
    }
    for (ll i = r; i < n - 1; i++)
    {
        if (b[i] <= b[i + 1])
        {
            r++;
        }
        else
        {
            break;
        }
    }
    cout << l + 1 << " " << r + 1 << endl;
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
