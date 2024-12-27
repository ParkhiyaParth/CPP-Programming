#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll nn, k;
    cin >> nn >> k;
    int a = 1 % k, b = 1 % k, n = 1;
    while (a != 0)
    {
        int c = (a + b) % k;
        a = b;
        b = c;
        n++;
    }
    cout << (nn % MOD) * (n % MOD) % MOD << endl;
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