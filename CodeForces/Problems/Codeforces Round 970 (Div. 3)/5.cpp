#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isAlter(string &s)
{
    bool ans = false;
    for (int i = 0; i < n - 3; i++)
    {
        if (s[i] == s[i + 2] && s[i + 1] == s[i + 3])
        {
            ans = true;
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int modd = 0;
    int meven = 0 if (n % 2 == 0)
    {
        for (int i = 2; i < s.size(); i += 2)
        {
            if (s[i] != s[0])
            {
                meven++;
            }
        }
        for (int i = 3; i < s.size(); i += 2)
        {
            if (s[i] != s[1])
            {
                modd++;
            }
        }
    }
    else
    {
        string make = "";
        for (int i = 0; i < s.size(); i++)
        {
            
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