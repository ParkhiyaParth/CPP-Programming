#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(), v.end());
    int ans1, ans2;
    ans1 = abs(v[0] - v[1]);
    ans2 = abs(v[1] - v[2]);
    cout << ans1 + ans2 << endl;
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
