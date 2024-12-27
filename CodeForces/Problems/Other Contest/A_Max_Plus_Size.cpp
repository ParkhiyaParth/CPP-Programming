#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll maxEvenIdx = INT_MIN;
    ll maxOddIdx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            maxEvenIdx = max((ll)maxEvenIdx, a[i]);
        }
        else
        {
            maxOddIdx = max((ll)maxOddIdx, a[i]);
        }
    }
    maxEvenIdx+=n/2;
    maxOddIdx+=(n+1)/2;
    cout << max(maxEvenIdx,maxOddIdx)<< endl;
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