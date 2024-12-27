#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    sort(c.begin(), c.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] > 0)
        {
            int idx = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
            ans += i - idx;
        }
    }
    cout << ans << endl;
    return 0;
}