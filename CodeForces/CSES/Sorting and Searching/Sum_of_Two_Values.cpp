#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(x - v[i]) != m.end())
        {
            cout << m[x - v[i]] + 1 << " " << i + 1 << endl;
            return 0;
        }
        m[v[i]] = i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}