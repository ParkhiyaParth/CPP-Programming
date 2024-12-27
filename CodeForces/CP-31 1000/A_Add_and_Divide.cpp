#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll cnt, ans = 1e18;
    for (ll i = 0; i * i <= a; i++)
    {
        if (b == 1 && i == 0)
            continue;
        cnt = i;
        ll temp = a;
        while (temp)
        {
            temp /= (b + i);
            cnt++;
        }
        ans = min(ans, cnt);
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