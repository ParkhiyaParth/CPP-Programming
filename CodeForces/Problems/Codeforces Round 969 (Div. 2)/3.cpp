#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> v(n);
    ll gc = __gcd(a, b);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]%=gc;
    }
    
    ll maxi = *max_element(v.begin(), v.end());
    sort(v.begin(), v.end());
    ll mn = v[n - 1] - v[0];
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // int ele = v[i];
        // ele += op;
        mn = min(mn, v[i] + gc - v[i + 1]);
        // ans = max(ans, abs(maxi - mn));
    }
    cout << mn << endl;
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