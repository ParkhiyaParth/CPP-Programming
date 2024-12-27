#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int z = k / 2;
    for (int i = 0; i < z; i++)
    {
        cout << x - i - 1 << ' ' << y << '\n';
        cout << x + i + 1 << ' ' << y << '\n';
    }
    if (k & 1){
        cout << x << ' ' << y << '\n';
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