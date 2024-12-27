#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }
    bool can = false;
    if (v[0].first >= s)
    {
        can = true;
    }
    for (int i = 1; i < n; ++i)
    {
        if (v[i].first - v[i - 1].second >= s)
        {
            can = true;
        }
    }
    if (m - v[n - 1].second >= s)
    {
        can = true;
    }

    if (can==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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