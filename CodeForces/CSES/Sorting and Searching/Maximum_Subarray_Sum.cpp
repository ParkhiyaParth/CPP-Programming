#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll max_sum = INT_MIN;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum > max_sum)
        {
            max_sum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << max_sum << endl;
    return 0;
}