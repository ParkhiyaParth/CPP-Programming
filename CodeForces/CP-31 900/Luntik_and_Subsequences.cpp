#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,k;
    cin >> n;
    vector<int> v(n);
    int z = 0;
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            z++;
        }
        if (v[i] == 1)
        {
            o++;
        }
    }
    // int c=0;

     cout << (1ll << z) * (ll)o << '\n';
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