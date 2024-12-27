#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int ans;
    int f;
    if (x % k == 0)
    {
        ans = x / k;
    }
    else
    {
        ans = (x / k) + 1;
    }

    if (y % k == 0)
    {
        f = y / k;
    }
    else
    {
        f = (y / k) + 1;
    }

    int mini = min(ans, f);
    int maxi = max(ans, f);
    int sd = mini + maxi + (maxi - mini);
    if (ans > f)
    {
        sd--;
    }
    cout << sd << endl;
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