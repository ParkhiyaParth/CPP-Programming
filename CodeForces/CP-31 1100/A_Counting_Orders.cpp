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
    vector<ll> temp(n);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        while (a[j] <= b[i] && j != n)
        {
            j++;
        }
        if (j != n)
        {
            temp[i] = n - j;
        }
    }
    sort(temp.begin(), temp.end());
    ll ans = 1;
    for (ll i = 0; i < temp.size(); i++)
    {
        ans = ((ans % MOD) * ((temp[i] - i) % MOD)) % MOD;
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