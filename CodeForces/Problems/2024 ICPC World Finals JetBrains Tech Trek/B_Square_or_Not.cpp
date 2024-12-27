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

    int r = sqrt(n);
    if (r * r != n)
    {
        cout << "No" << endl;
        return;
    }

    bool ans = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < r; j++)
        {
            int ele = i * r + j;

            if (i == 0 || i == r - 1 || j == 0 || j == r - 1)
            {
                if (s[ele] != '1')
                {
                    ans = false;
                }
            }
            else
            {
                if (s[ele] != '0')
                {
                    ans = false;
                }
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
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