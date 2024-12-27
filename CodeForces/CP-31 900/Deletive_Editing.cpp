#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    map<char, int> m1, m2;
    for (auto ch : s)
    {
        m1[ch]++;
    }
    for (auto ch : t)
    {
        m2[ch]++;
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {
            if (m1[s[i]] < m2[t[j]])
            {
                cout << "NO" << endl;
                return;
            }
            if (m1[s[i]] == m2[t[j]])
            {
                m2[t[j]]--;
                j++;
            }
        }
        m1[s[i]]--;
        i++;
    }

    if (j == t.size())
    {
        cout << "YES" << endl;
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