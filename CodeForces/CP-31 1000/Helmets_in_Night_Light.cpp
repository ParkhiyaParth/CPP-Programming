#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<ll, ll>> vp;
    vp.push_back({p, n + 1});
    for (int i = 0; i < n; i++)
    {
        vp.push_back(make_pair(b[i], a[i]));
    }
    sort(vp.begin(), vp.end());
    // for(auto i:vp){
    //     cout << i.first << " " << i.second << endl;
    // }
    
    ll cost = p;
    int total = 1;
    int i = 0;
    while (total < n)
    {
        int left = n - total;
        if (vp[i].second <= left)
        {
            total += vp[i].second;
            cost += vp[i].first * 1LL * vp[i].second;
        }
        else
        {
            total = n;
            cost += left * 1LL * vp[i].first;
        }
        i++;
    }

    cout << cost << endl;
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