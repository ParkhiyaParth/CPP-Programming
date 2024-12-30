#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll i = 0, j = n - 1;
    while (i <= j) {
        if (v[i] + v[j] <= x) {
            i++;
        }
        j--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}