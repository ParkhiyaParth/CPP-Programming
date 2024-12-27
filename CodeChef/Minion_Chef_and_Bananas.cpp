#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool sum(vector<int> &v, long double val, ll h)
{
    ll nb = 0;
    for (auto &i : v)
    {
        nb += ceil(i /val);
    }
    return (nb<=h);
}
void solve()
{
    ll n, h;
    cin >> n >> h;
    vector<int> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll low = 0;
    ll high = *max_element(v.begin(), v.end());
    while (low < high)
    {
        ll mid = low+(high - low) / 2;
        if (sum(v,mid,h))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low << endl;
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