#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, d, k;
    cin >> n >> d >> k;
    vector<pair<ll, ll>> vp(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> vp[i].first >> vp[i].second;
    }
    sort(vp.begin(), vp.end());

    ll mn = INT64_MAX, mx = 0, b = -1, m = -1;
    ll j = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll i = 1; i <= n - d + 1; i++)
    {
        while (j < k && vp[j].first <= i + d - 1)
        {
            pq.push(vp[j].second);
            j++;
        }
        while (pq.size() && pq.top() < i)
        {
            pq.pop();
        }
        ll c = pq.size();
        if (c > mx)
        {
            mx = c;
            b = i;
        }
        if (c < mn)
        {
            mn = c;
            m = i;
        }
    }
    cout << b << " " << m << endl;
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