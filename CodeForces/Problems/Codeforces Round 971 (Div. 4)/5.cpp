#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    while (n != 0)
    {
        v.push_back(k);
        k++;
        n--;
    }
    int i = 0;
    int j = 1;

    while (j < n)
    {
        int s1 = 0;
        int s2 = 0;
        for (int st = i; st <= j; st++)
        {
            s1 += v[st];
        }
        for (int st = j; st < n; st++)
        {
            s2 += v[st];
        }
        if (s1 >= s2)
        {
            cout << s1 - s2 << endl;
            return;
        }
        j++;
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