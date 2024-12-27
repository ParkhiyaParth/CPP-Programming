#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll k;
    cin >> k;
    ll l = 1;
    ll r = 4e18;
    ll ans = 4e18;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll on = mid - (ll)sqrt(mid);
        if (on < k)
        {
            l = mid + 1;
        }
        else
        {
            ans = mid;
            r = mid - 1;
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