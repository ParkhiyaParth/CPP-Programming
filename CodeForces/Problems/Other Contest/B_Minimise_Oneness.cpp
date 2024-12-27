#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    // if (n % 2 == 0)
    // {
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cout << (i % 2);
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < n - 1; ++i)
    //     {
    //         cout << (i % 2);
    //     }
    //     cout << 0;
    // }
    cout << string(n - 1, '0') + '1' << endl;
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