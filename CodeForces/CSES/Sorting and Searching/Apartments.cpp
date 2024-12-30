#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[j] < a[i] - k)
        {
            j++;
        }
        else if (b[j] > a[i] + k)
        {
            i++;
        }
        else
        {
            ans++;
            i++;
            j++;
        }
    }
    cout << ans << endl;
    return 0;
}