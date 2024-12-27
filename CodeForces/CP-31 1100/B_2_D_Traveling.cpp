#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n, k, a, b, price, pricea = LLONG_MAX / 2, priceb = LLONG_MAX / 2;
    cin >> n >> k >> a >> b;
    vector<ll> x(n), y(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    price = abs(x[a - 1] - x[b - 1]) + abs(y[a - 1] - y[b - 1]);
    for (ll i = 0; i < k; i++)
    {
        pricea = min(pricea, abs(x[a - 1] - x[i]) + abs(y[a - 1] - y[i]));
        priceb = min(priceb, abs(x[b - 1] - x[i]) + abs(y[b - 1] - y[i]));
    }
    cout << min(price, pricea + priceb) << endl;
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