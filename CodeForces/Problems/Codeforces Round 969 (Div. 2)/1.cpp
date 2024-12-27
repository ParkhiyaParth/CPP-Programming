#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int a, c;
    cin >> a >> c;
    if (a % 2 == 0)
    {
        a++;
    }
    cout << (c - a + 2) / 4 << endl;
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