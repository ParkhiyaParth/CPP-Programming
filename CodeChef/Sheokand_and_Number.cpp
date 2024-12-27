#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    for (int i = 0; i < 30; i++)
    {
        for (int j = i + 1; j <= 30; j++)
        {
            ans = min(ans, abs((1 << i) + (1 << j) - n));
        }
    }
    cout << ans << endl;
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