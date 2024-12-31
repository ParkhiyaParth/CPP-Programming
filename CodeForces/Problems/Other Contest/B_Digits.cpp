#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll fc(ll n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fc(n - 1);
}
void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> v;
    v.push_back(1);
    for (ll i = 3; i <= 9; i += 2)
    {
        ll k = 1;
        ll num = d;
        bool flag = true;
        while (num % i!=0)
        {
            num *= 10;
            num += d;
            // num %= i ;
            k++;
            if (k >= i + 1)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            continue;
        if (n >= k)
        {
            v.push_back(i);
        }
        else
        {
            ll val = fc(n);
            if (val % k == 0)
            {
                v.push_back(i);
            }
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
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