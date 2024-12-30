#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    ll ans = 0;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
        else
        {
            ans += cnt;
            cnt = 0;
        }
    }
    cout << ans << endl;
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