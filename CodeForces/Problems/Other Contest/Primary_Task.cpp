#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool ans = true;
    if (n < 3 || s[0] != '1' || s[1] != '0' || s[2] == '0')
    {
        cout << "NO" << endl;
    }
    else if (n == 3)
    {
        if (s[2] == '1')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }  
    }
    else
    {
        cout << "YES" << endl;
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