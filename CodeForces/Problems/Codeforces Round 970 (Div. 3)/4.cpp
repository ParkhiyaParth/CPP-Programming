#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    string s;
    cin >> s;
    vector<bool> vis(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            ll bc = 0;
            ll cur = i;
            vector<ll> cl;

            while (!vis[cur])
            {
                vis[cur] = true;
                cl.push_back(cur);
                if (s[cur] == '0')
                {
                    bc += 1;
                }
                cur = v[cur];
            }

            for (int idx : cl)
            {
                a[idx] = bc;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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