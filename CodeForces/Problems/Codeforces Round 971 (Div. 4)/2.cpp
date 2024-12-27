#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j=0;j<4;j++)
        {
            if (s[j] == '#')
            {
                ans.push_back(j + 1);
                break;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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