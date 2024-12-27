#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int start = 0;
    int end = n - 1;
    int ans = n;
    bool t = true;
    while (t)
    {
        if ((s[start] == '0' && s[end] == '1') || (s[start] == '1' && s[end] == '0'))
        {
            start++;
            end--;
            ans = ans - 2;
        }
        else
        {
            t = false;
        }
    }
    if (ans < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
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