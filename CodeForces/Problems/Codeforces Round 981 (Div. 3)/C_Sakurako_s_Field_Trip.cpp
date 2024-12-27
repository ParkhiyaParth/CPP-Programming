#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sz = (n + 1) / 2;
    vector<vector<ll>> dp(sz, vector<ll>(2, 0));
    for (int i = 1; i < sz; i++)
    {
        dp[i][0] = min(dp[i - 1][0] + (a[i] == a[i - 1]) + (a[n - i - 1] == a[n - i]),
                       dp[i - 1][1] + (a[i] == a[n - i]) + (a[i - 1] == a[n - i - 1]));

        dp[i][1] = min(dp[i - 1][0] + (a[i] == a[n - i]) + (a[i - 1] == a[n - i - 1]),  // 1 0
                       dp[i - 1][1] + (a[i] == a[i - 1]) + (a[n - i - 1] == a[n - i])); // 0 1
    }
    int ans = min(dp[sz - 1][0], dp[sz - 1][1]);
    if (n % 2 == 0)
    {
        ans += a[n / 2] == a[n / 2 - 1];
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