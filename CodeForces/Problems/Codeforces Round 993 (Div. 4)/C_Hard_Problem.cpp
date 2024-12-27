#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll m, a, b, c;
    cin >> m >> a >> b >> c;
    int total = 0;
    if (a + b + c <= m)
    {
        cout << a + b + c << endl;
        return;
    }
    cout << min(m, a) + min(m, b) + min((2 * m - min(m, a) - min(m, b)), c) << endl;
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