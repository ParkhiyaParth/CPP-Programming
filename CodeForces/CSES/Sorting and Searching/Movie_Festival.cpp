#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll last = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i].second >= last)
        {
            ans++;
            last = v[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}