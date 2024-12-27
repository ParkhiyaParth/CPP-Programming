#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<pair<ll, ll>> tp(n);
    vector<ll> pre(n);
    vector<ll> idx;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        tp[i] = {v[i], i};
    }
    sort(tp.begin(), tp.end());
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            pre[i] = tp[i].first;
        }
        else
        {
            if (pre[i - 1] < tp[i].first)
                idx.push_back(i);
            pre[i] = pre[i - 1] + tp[i].first;
        }
    }
    idx.push_back(n);
    for (ll i = 0; i < n; i++)
    {
        ll p = tp[i].second;
        ll which = lower_bound(idx.begin(), idx.end(), i + 1) - idx.begin();
        v[p] = idx[which] - 1;
    }
    for (auto it : v)
        cout << it << " ";
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