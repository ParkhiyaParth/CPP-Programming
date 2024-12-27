#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(k), r(k), m(k);
    for (int i = 0; i < k; i++)
    {
        cin >> l[i] >> r[i] >> m[i];
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = i + 1;
    }
    bool v = true;
    for (int i = 0; i < k; i++)
    {
        int mini = INT_MAX;
        for (int j = l[i] - 1; j < r[i]; j++)
        {
            mini = min(mini, ans[j]);
        }
        if (mini == m[i])
        {
            v = false;
            break;
        }
    }
    if (!v)
    {
        cout << -1 << endl;
        return;
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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