#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3e5 + 5;
vector<int> xr(N, 0);
void inti()
{
    for (int i = 1; i < N; i++)
    {
        xr[i] = xr[i - 1] ^ i;
    }
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int mnln = a;
    int val = xr[a - 1];
    if (val == b)
    {
        cout << mnln << endl;
        return;
    }
    else
    {
        if ((val ^ b) == a)
        {
            cout << mnln + 2 << endl;
            return;
        }
        else
        {
            cout << mnln + 1 << endl;
            return;
        }
    }
}
int main()
{
    int tt;
    cin >> tt;
    inti();
    while (tt--)
    {
        solve();
    }
    return 0;
}