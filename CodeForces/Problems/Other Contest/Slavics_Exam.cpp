#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isSubsequence(string s, string t)
{
    int s_len = s.size(), t_len = t.size();
    int i = 0, j = 0;
    while (i < s_len && j < t_len)
    {
        if (s[i] == t[j] || s[i] == '?')
        {
            j++;
        }
        i++;
    }
    return j == t_len;
}
void solve()
{
    string s, t;
    cin >> s >> t;
    if (isSubsequence(s, t))
    {
        int s_len = s.size();
        int t_len = t.size();
        int j = 0;
        for (int i = 0; i < s_len; i++)
        {
            if (s[i] == '?')
            {
                if (j < t_len)
                {
                    s[i] = t[j];
                    j++;
                }
                else
                {
                    s[i] = 'a';
                }
            }
        }
        cout << "YES" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "NO" << endl;
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