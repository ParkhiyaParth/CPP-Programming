#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll>prefix(n+1);
    prefix[0] = a[0];
    for (ll i = 0; i < n; i++)
    {
        prefix[i+1] = prefix[i] + a[i];
    }
    ll sum = 0;
    for(ll i=0;i<=k;i++){
        sum=max(sum,prefix[n-(k-i)]-prefix[2*i]);
    }
    cout << sum << endl;
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