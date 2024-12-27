#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    
    if (n < 4 || n % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    ll maxi = n / 4;
    ll mini;
    if (n % 6 == 0)
    {
        mini = n / 6;
    }
    else
    {
        mini = n / 6 + 1;
    }
    cout << mini << " " << maxi << endl;
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