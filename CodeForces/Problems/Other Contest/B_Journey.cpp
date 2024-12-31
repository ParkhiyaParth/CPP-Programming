#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll dis = 3 * (n / (a + b + c));
    n %= (a + b + c);
    if (n > 0)
    {
        n -= a;
        dis++;
    }
    if (n > 0)
    {
        n -= b;
        dis++;
    }
    if (n > 0)
    {
        n -= c;
        dis++;
    }
    cout << dis << endl;
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