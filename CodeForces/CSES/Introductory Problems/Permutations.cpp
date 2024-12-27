#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> ans;
    if (n==1)
    {
        cout << 1 << endl;
        return 0;
    }
    if(n==2 || n==3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else
    {
        for (ll i = 2; i <= n; i += 2)
        {
            ans.push_back(i);
        }
        for (ll i = 1; i <= n; i += 2)
        {
            ans.push_back(i);
        }
        
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}