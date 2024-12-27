#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    // string ans = "";
    if (n == 1)
    {
        s += (s[0] + 1);
        cout << s << endl;
        return;
    }
    int sw,ch;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            ch= (s[i - 1] + 1);
            sw = i;
            break;
        }
    }
    // int sw = i;
    string ans = "";
    for (int i = 0; i < sw; i++)
    {
        ans += s[i];
    }
    // swap(s[sw], s[n]);
    ans += ch;
    for (int i = sw; i < n; i++)
    {
        ans += s[i];
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