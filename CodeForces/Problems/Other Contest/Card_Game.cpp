#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int win = 0;
    int s = (a > x) + (b > y);
    int sl = (x > a) + (y > b);
    if (s > sl)
    {
        win++;
    }
    s = (a > y) + (b > x);
    sl = (y > a) + (x > b);
    if (s > sl)
    {
        win++;
    }
    s = (b > y) + (a > x);
    sl = (y > b) + (x > a);
    if (s > sl)
    {
        win++;
    }
    s = (b > x) + (a > y);
    sl = (x > b) + (y > a);
    if (s > sl)
    {
        win++;
    }
    cout << win << endl;
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