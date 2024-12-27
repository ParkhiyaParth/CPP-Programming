#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll triplets=INT_MAX;
    for (ll a = 1; a <= n; a++)
    {
        for (ll b = 1; b <= n; b++)
        {
            for (ll c = 1; c <= n; c++)
            {
                if(a+b+c<=x && (a*b+a*c+b*c<=n)){
                    triplets++;
                }
            }
        }
    }
    cout << triplets << endl;
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