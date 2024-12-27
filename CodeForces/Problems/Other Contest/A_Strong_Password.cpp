#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ind = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ind = i;
        }
    }
    if (ind == -1)
    {
        if (s.back() == 'a')
        {
            cout << s + "b" << endl;
        }
        else
        {
            cout << s + "a" << endl;
        }
    }
    else
    {
        string t = "a";
        if (s[ind] == 'a')
        {
            t = "b";
        }
        cout << s.substr(0, ind + 1) + t + s.substr(ind + 1) << endl;
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