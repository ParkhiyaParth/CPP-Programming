#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int curr_blank = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            curr_blank++;
        }
        if (v[i] == 1)
        {
            ans = max(ans, curr_blank);
            curr_blank = 0;
        }
    }
    cout << max(curr_blank, ans) << endl;
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