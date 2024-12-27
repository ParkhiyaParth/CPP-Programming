#include <iostream>
#include <bits/stdc++.h>
#define ll long long
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
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if (s.size() != n)
        {
            cout << "NO" << endl;
            continue;
        }
        map<int, char> IntToChar;
        map<char, int> CharToInt;
        bool ans = true;
        for (int j = 0; j < n; j++)
        {
            char ch = s[j];
            int val = v[j];
            if (CharToInt.count(ch) && CharToInt[ch] != val)
            {
                ans = false;
                break;
            }
            if (IntToChar.count(val) && IntToChar[val] != ch)
            {
                ans = false;
                break;
            }
            CharToInt[ch] = val;
            IntToChar[val] = ch;
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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