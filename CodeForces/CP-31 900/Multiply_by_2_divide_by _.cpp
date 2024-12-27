#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    int c2 = 0, c3 = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        c2++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        c3++;
    }
    if (n == 1 && c2 <= c3)
    {
        cout << 2 * c3 - c2 << endl;
    }
    else
    {
        cout << -1 << endl;
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