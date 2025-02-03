#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<pair<int, int>, int> mpp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        auto itr = mpp.find(make_pair((x - a[i] % x) % x, a[i] % y));
        if (itr != mpp.end())
        {
            ans += itr->second;
        }
        mpp[make_pair(a[i] % x, a[i] % y)]++;
    }
    cout << ans << "\n";
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