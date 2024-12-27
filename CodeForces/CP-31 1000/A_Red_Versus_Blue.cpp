#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    int ma = r / (b + 1);
    int cb = r % (b + 1);
    string s;
    for (int i = 0; i < (b + 1 - cb); i++)
    {
        string ss(ma, 'R');
        s += ss;
        s += 'B';
    }
    for (int i = 0; i < cb; i++)
    {
        string ss(ma + 1, 'R');
        s += ss;
        s += 'B';
    }
    s.pop_back();
    cout << s << endl;
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