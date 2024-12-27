#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll pos(vector<ll> &a, ll mid, ll n, ll x)
{
    ll water = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < mid)
        {
            water += mid - a[i];
        }
    }
    return water;
}
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll low = 1;
    ll high = 1e10;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (pos(a, mid, n, x) > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low - 1 << endl;
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