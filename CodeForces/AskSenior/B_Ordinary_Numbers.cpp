#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (ll i = 1; i <= n; i = i * 10 + 1)
    {
        for (int d = 1; d <= 9; d++)
        {
            if (i * d <= n)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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