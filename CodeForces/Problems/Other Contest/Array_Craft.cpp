#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    x--, y--;
    vector<int> v(n);
    for (int i = y; i <= x; i++)
    {
        v[i] = 1;
    }
    for (int i = y - 1; i >= 0; i--)
    {
        if (y - i & 1)
        {
            v[i] = -1;
        }
        else
        {
            v[i] = 1;
        }
    }
    for (int i = x + 1; i < n; i++)
    {
        if (i - x & 1)
        {
            v[i] = -1;

        }
        else{
            v[i]=1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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