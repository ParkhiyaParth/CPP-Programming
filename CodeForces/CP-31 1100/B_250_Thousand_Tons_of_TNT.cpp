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
    vector<ll> pre;
    pre.push_back(0);
    ll sum = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        pre.push_back(sum);
    }
    for (ll i = 1; i <= n; i++)
    {
        vector<ll> temp;
        if (n % i == 0)
        {
            for (ll j = i; j <= n; j += i)
            {
                sum = pre[j] - pre[j - (i)];
                temp.push_back(sum);
            }
            sort(temp.begin(), temp.end());
            ans = max(ans, temp[(ll)temp.size() - 1] - temp[0]);
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