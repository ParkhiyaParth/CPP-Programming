#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll ans = 1;
    while (n > 3)
    {
        n /= 4;
        ans *= 2;
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