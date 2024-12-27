#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
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
    // sort(v.rbegin(), v.rend());
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % k == 0)
        {
            ans.push_back({k, -i});
        }
        else
        {
            ans.push_back({v[i] % k, -i});
        }
    }
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < n; i++)
    {
        cout << abs(ans[i].second) + 1 << " ";
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