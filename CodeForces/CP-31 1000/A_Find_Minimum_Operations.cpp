#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    while (n > 0)
    {
        ans = ans + n % k;
        n = n / k;
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