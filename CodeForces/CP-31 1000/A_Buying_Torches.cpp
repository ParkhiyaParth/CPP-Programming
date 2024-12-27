#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    ll sticks = k * (y + 1) - 1;
    ll ans = (sticks + x - 2) / (x - 1) + k;
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