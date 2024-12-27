#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll low = 1;
    ll high = 1e9;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if (sum > c)
            {
                break;
            }
        }
        if (sum == c)
        {
            cout << mid << endl;
            return;
        }
        if (sum > c)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
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