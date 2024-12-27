#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int msb = 0;
    for (int i = 0; i < 30; i++)
    {
        if ((n >> i) & 1 == 1)
        {
            msb = i;
        }
    }
    cout << (1 << msb) - 1 << endl;
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