#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end());
    int cnt = 1;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i-1] > k)
        {
            cnt = 1;
        }
        else
        {
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << endl;
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