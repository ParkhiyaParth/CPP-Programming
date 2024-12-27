#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    // int c=0;
    // while (n 0)
    // {
    //     if (n / 2 == 0)
    //     {
    //         c++;
    //         n = n - 2;
    //     }
    //     else
    //     {
    //         c++;
    //         n = n - 4;
    //     }
    // }
    // cout << c << endl;
    cout << n/4+(n%4!=0) << endl;
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