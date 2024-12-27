#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isP(ll n)
{
    string b;
    while (n > 0)
    {
        b += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    reverse(b.begin(), b.end());

    vector<ll> ans;
    ll cn = 1;
    for (ll i = 1; i < b.size(); i++)
    {
        if (b[i] == b[i - 1])
        {
            ++cn;
        }
        else
        {
            ans.push_back(cn);
            cn = 1;
        }
    }
    ans.push_back(cn);
    for (ll i = 1; i < ans.size(); i++)
    {
        if (ans[i] != ans[0])
        {
            return false;
        }
    }
    return true;
}
vector<ll> pre(ll limit)
{
    vector<ll> pds;
    for (ll i = 1; i <= limit; i++)
    {
        if (isP(i))
        {
            pds.push_back(i);
        }
    }
    return pds;
}

int main()
{
    vector<ll> pds = pre(1000000000); 

    int tt;
    cin >> tt;
    while (tt--)
    {
        ll l, r;
        cin >> l >> r;
        ll leftCount = lower_bound(pds.begin(), pds.end(), l) - pds.begin();
        ll rightCount = upper_bound(pds.begin(), pds.end(), r) - pds.begin();

        cout << (rightCount - leftCount) << endl;
    }
    return 0;
}