#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll st = max(1LL, n - k + 1);
    ll o = (st % 2 == 1) ? st : st + 1;
    ll e = (n % 2 == 1) ? n : n - 1;
    if (o > e)
    {
        cout << "YES" << endl;
    }
    else
    {
        ll oc = (e - o) / 2 + 1;
        if (oc % 2 == 0)
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