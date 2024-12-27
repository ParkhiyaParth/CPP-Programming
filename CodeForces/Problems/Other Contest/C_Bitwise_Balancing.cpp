#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll b, c, d;
    cin >> b >> c >> d;
    ll a = c ^ d;
    if ((a | b) - (a & c) == d)
    {
        cout << a << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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