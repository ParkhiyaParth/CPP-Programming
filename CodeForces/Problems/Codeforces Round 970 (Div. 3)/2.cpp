#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll side = sqrt(n);
    bool ans = true;
    if (side * side != n)
    {
        cout << "No" << endl;
        return;
    }
    for (int i = 0; i < side; i++)
    {
        if (s[i] != '1' || s[(side - 1) * side + i] != '1')
        {
            ans = false;
            break;
        }
    }
    for (int i = 0; i < side; i++)
    {
        if (s[i * side] != '1' || s[i * side + (side - 1)] != '1')
        {
            ans = false;
            break;
        }
    }
    for (int i = 1; i < side - 1 && ans; i++)
    {
        for (int j = 1; j < side - 1; j++)
        {
            if (s[i * side + j] != '0')
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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