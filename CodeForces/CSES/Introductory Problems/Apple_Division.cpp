#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = INT_MAX;
    for (int i = 0; i < 1 << n; i++)
    {
        ll s1 = 0, s2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                s1 += a[j];
            }
            else
            {
                s2 += a[j];
            }
        }
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << endl;
    return 0;
}