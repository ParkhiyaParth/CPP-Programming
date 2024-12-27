#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll lft = 0;
    ll rgt = sqrt(2 * (r - l + 1)) + 1;
    ll k = 0;

    while (lft <= rgt)
    {
        int mid = lft + (rgt - lft) / 2;
        ll sum = (mid * (mid + 1)) / 2;
        if (l + sum <= r)
        {
            k = mid;
            lft = mid + 1;
        }
        else
        {
            rgt = mid - 1;
        }
    }
    cout << k + 1 << endl;
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