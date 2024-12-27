#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;
    vector<pair<int, int>> dirs = {{a, b},
                                   {a, -b},
                                   {-a, b},
                                   {-a, -b},
                                   {b, a},
                                   {b, -a},
                                   {-b, a},
                                   {-b, -a}};
    set<pair<int, int>> s1, s2;
    for (auto d : dirs)
    {
        int x = xk + d.first;
        int y = yk + d.second;
        s1.insert(make_pair(x, y));
        x = xq + d.first;
        y = yq + d.second;
        s2.insert(make_pair(x, y));
    }
    int ans = 0;
    for (auto pos : s1)
    {
        if (s2.find(pos) != s2.end())
        {
            // cout << pos.first << " " << pos.second;
            ans++;
        }
        cout << ans << endl;
        // cout << endl;
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