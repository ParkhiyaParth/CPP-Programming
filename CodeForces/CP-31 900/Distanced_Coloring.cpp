#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    // int h = (n + k - 1) / k;
    // int v = (m + k - 1) / k;
    cout << min(n,k)*min(m,k) << endl;
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