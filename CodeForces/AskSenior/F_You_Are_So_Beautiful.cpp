#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> st, lt;
    for (int i = 0; i < n; i++)
    {
        if (st[v[i]] == 0)
        {
            st[v[i]] = i + 1;
        }
        lt[v[i]] = i + 1;
    }
    ll cnt = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (lt[v[i]] == i + 1)
        {
            cnt++;
        }
        if (st[v[i]] == i + 1)
        {
            ans += cnt;
        }
    }
    cout << ans << endl;
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