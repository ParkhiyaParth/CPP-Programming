#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        // return;
    }
    else if (k % 2 == 1)
    {
        cout << "YES" << endl;
        // return;
    }
    else
    {
        cout << "NO" << endl;
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