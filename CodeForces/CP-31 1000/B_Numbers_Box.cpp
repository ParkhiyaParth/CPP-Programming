#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int negative = 0, x = INT_MAX, ans = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] < 0)
            {
                negative++;
            }
            if (a[i][j] == 0)
            {
                flag = 1;
            }
            x = min(abs(a[i][j]), x);
            ans += abs(a[i][j]);
        }
    }
    if (flag == 1)
    {
        cout << ans << endl;
    }
    else if (negative % 2 == 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans - 2 * x << endl;
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