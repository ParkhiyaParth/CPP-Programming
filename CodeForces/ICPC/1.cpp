#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> red;
    vector<pair<ll, ll>> blue;
    for (ll i = 0; i < n; i++)
    {
        ll x, u;
        cin >> x >> u;
        red.push_back({x, u});
    }
    for (ll i = 0; i < m; i++)
    {
        ll y, v;
        cin >> y >> v;
        blue.push_back({y, v});
    }
    
    return 0;
}
