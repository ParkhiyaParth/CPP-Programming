#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    int p = 0;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > q)
        {
            p = i;
        }
        if (i - k >= p)
        {
            ans += i - p - k + 1;
        }
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