#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << v[0] << endl;
        return;
    }
    else
    {
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while (i < j)
        {
            ans.push_back(v[i]);
            ans.push_back(v[j]);
            i++;
            j--;
        }
        if (n % 2 == 1)
        {
            i++;
            ans.push_back(v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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