#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string v;
    string s = "aeiou";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n / 5 + (i < n % 5); j++)
        {
            v += s[i];
        }
    }
    cout << v << endl;
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