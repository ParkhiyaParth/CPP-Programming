#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    ll ans[n];
    ll idx = 1;
    ll time = 0;
    for (ll i = n - 1; i >= 0; i -= 2)
    {
        ll temp = 2 * idx;
        time = time + (a[i].first) * temp;
        ans[a[i].second] = idx;

        idx++;
    }
    idx = -1;
    for (ll i = n - 2; i >= 0; i -= 2)
    {
        ll temp = 2 * abs(idx);
        time = time + (a[i].first) * temp;
        ans[a[i].second] = idx;
        idx--;
    }
    cout << time << endl;
    cout << 0 << " ";
    for (ll i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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