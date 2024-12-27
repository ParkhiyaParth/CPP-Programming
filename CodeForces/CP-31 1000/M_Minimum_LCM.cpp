#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    int a=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=n/i;
            break;
        }
    }
    cout << a << " " << n-a << endl;
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