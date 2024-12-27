#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ab = 0;
    int ba = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'a' && s[i] == 'b')
        {
            ab++;
        }
        if (s[i - 1] == 'b' && s[i] == 'a')
        {
            ba++;
        }
    }
    if (ab == ba)
    {
        cout << s << endl;
    }
    else if (ab > ba)
    {
        s[n - 1] = 'a';
        cout << s << endl;
    }
    else
    {
        s[n - 1] = 'b';
        cout << s << endl;
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