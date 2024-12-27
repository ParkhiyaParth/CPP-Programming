#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0;
    int zeros = 0;
    for (auto i : s)
    {
        if (i == '0')
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }

    int res = 0;
    for (int k = 1; k < n + 1; k++)
    {
        if (k >= zeros && (k - zeros) % 2 == 0)
        {
            res++;
        }
        else if (k >= ones && (k - ones) % 2 == 0)
        {
            res++;
        }
    }
    cout << res << endl;
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