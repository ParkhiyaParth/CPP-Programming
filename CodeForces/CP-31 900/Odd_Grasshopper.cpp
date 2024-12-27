#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll x, n;
    cin >> x >> n;
    ll ans = x;
    switch (n % 4)
    {
    case 0:
        ans = 0;
        break;
    case 1:
        ans = -n;
        break;
    case 2:
        ans = 1;
        break;
    case 3:
        ans = n + 1;
        break;
    }
    if (x % 2 == 0)
    {
        cout << x + ans << endl;
    }
    else
    {
        cout << x - ans << endl;
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