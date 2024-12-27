#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    for (auto i : v)
    {
        sum += i;
    }
    ll mini = sum / x;
    if (sum % x != 0)
    {
        mini += 1;
    }
    ll maxi = 0;
    for (ll i = 0; i < n; i++)
    {
        ll val = v[i] / x;
        if (v[i] % x != 0)
        {
            val += 1;
        }
        maxi += val;
    }
    cout << mini << " " << maxi << endl;
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