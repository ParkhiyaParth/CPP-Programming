#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int op = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (a[i] >= a[i + 1] && a[i] > 0)
        {
            a[i] = a[i] / 2;
            op++;
        }
        if (a[i] == a[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << op << endl;
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