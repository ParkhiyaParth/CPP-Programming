#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll cnt = 0;
    ll maxi = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
        else
        {
            cnt++;
            maxi = max(maxi, cnt);
            cnt = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}