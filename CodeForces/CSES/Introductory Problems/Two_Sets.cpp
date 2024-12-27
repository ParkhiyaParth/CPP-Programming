#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    ll req = sum / 2;
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        vector<ll> a;
        vector<ll> b;
        ll i = n;
        while (i > 0)
        {
            if (req>=i)
            {
                a.push_back(i);
                req -= i;
            }
            else
            {
                b.push_back(i);
            }
            i--;
        }
        ll sza = a.size();
        ll szb = b.size();
        cout << sza << endl;
        for (ll i = 0; i < sza; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << szb << endl;
        for (ll i = 0; i < szb; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}