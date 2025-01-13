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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] != 1)
    {
        cout << "NO" << endl;
        return;
    }
    ll ans = a[0];
    for (int i = 1; i < n; i++)
    {
        if (ans < a[i])
        {
            cout << "NO" << endl;
            return;
        }
        ans += a[i];
    }
    cout << "YES" << endl;
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