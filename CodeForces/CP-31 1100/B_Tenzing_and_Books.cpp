#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll OR = 0;
    for (int i = 0; i < 3; i++)
    {
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        for (int j = 0; j < n; j++)
        {
            if ((x | v[j]) != x)
            {
                break;
            }
            OR |= v[j];                                                                                                           
        }
    }
    if(OR == x)
    {
        cout << "YES" << endl;
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