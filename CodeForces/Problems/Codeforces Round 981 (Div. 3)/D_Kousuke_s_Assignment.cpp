#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    vector<ll> pre(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    vector<ll> dp(n + 1, 0);
    dp[0] = 0;
    map<ll, ll> mp;
    mp[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        dp[i] = dp[i - 1];
        if (mp.find(pre[i]) != mp.end())
        {
            dp[i] = max(dp[i], dp[mp[pre[i]]] + 1);
        }
        mp[pre[i]] = i;
    }
    cout << dp[n] << endl;
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