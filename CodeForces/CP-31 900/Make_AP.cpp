#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool yes = false;
    if ((2 * b - c) % a == 0)
    {
        if ((2 * b - c) / a > 0)
        {
            yes = true;
        }
    }
    if ((c + a) % (2 * b) == 0)
    {
        yes = true;
    }
    if ((2 * b - a) % c == 0)
    {
        if ((2 * b - a) / c > 0)
        {
            yes = true;
        }
    }
    if (a == b && b == c)
    {
        yes = true;
    }
    if (yes)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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