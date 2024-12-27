#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int last = 0;
    int ans = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i] - last);
        last = v[i];
    }
    ans = max(ans, 2 * (x - last));
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