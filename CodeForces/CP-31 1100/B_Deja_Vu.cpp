#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        if (x.size() == 0 || x.back() > temp)
        {
            x.push_back(temp);
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (a[j] % (1 << x[i]) == 0)
            {
                a[j] += (1 << (x[i] - 1));
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