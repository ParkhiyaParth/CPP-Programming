#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int po = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            po += v[i];
        }
        else
        {
            neg -= v[i];
        }
    }
    cout << po + neg << endl;
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