#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a, b, ans = 0;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        if (a < b)
        {
            swap(a, b);
        }
        while (a > b)
        {
            if (a / 8 >= b && a % 8 == 0)
            {
                ans++;
                a /= 8;
            }
            else if (a / 4 >= b && a % 4 == 0)
            {
                ans++;
                a /= 4;
            }
            else if (a / 2 >= b && a % 2 == 0)
            {
                ans++;
                a /= 2;
            }
            else
            {
                break;
            }
        }
        if (a == b)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
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