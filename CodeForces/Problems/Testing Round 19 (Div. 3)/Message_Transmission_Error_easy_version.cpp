#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> b(string &s)
{
    vector<int> f(s.length() + 1, 0);
    int k = 0;
    for (int i = 1; i < s.length(); i++)
    {
        while (k && s[k] != s[i])
        {
            k = f[k];
        }
        if (s[k] == s[i])
        {
            k++;
        }
        f[i + 1] = k;
    }
    return f;
}
int main()
{
    string s;
    cin >> s;
    vector<int> f = b(s);
    if (f.back() * 2 > s.length())
    {
        cout << "YES" << endl;
        cout << s.substr(0, f.back()) << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}