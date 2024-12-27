#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int odd = 0;
    char odd_char;
    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            odd++;
            odd_char = i.first;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        string ans = "";
        for (auto i : m)
        {
            if (i.first != odd_char)
            {
                for (int j = 0; j < i.second / 2; j++)
                {
                    ans += i.first;
                }
            }
        }
        cout << ans;
        if (odd == 1)
        {
            for (int i = 0; i < m[odd_char]; i++)
            {
                cout << odd_char;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    return 0;
}