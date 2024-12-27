#include <iostream>
#include <bits/stdc++.h>
#define ll long long
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
    ll moves = 0;
    for (ll i = 1; i < n; i++)
    {
        while (v[i] < v[i - 1])
        {
            v[i] += 1;
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}