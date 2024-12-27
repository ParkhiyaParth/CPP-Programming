#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    string s;
    cin >> s;
    string ans = "";
    reverse(s.begin(), s.end());
    for (auto i : s)
    {
        if (i == 'p')
        {
            ans += 'q';
        }
        else if (i == 'q')
        {
            ans += "p";
        }
        else if (i == 'w')
        {
            ans += "w";
        }
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