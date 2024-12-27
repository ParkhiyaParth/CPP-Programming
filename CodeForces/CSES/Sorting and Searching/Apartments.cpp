#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
bool BS(vector<ll> &b, ll x)
{
    ll low = 0;
    ll high = b.size() - 1;
    if (low == x || high == x)
    {
        return true;
    }
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (b[mid] == x)
        {
            return true;
        }
        else if (b[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll low = a[i] - k;
        ll high = a[i] + k;
        for (ll j = low; j <= high; j++)
        {
            if (BS(b, j))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}