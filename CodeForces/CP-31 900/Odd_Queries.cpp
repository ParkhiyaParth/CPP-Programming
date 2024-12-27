#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        // psum[i] = v[i] + psum[i - 1];/
    }
    vector<ll> psum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        // cin >> v[i];
        psum[i] = psum[i - 1]+v[i];
    }
    for (int i = 0; i < q; i++)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll ans = psum[l-1]+psum[n] - psum[r] + k * (r - l + 1);
        if (ans % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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