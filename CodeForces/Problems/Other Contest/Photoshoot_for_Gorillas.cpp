#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int gorillas;
    cin >> gorillas;
    vector<int> v(gorillas);
    for (int i = 0; i < gorillas; i++)
    {
        cin >> v[i];
    }
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int i1 = max(0, i - k + 1);
            int j1 = max(0, j - k + 1);
            int i2 = min(i, n - k);
            int j2 = min(j, m - k);
            b.push_back((i2 - i1 + 1) * (j2 - j1 + 1));
        }
    }
    sort(b.rbegin(), b.rend());
    sort(v.rbegin(), v.rend());
    int64_t ans = 0;
    for (int i = 0; i < gorillas; i++)
    {
        ans += int64_t(v[i]) * b[i];
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