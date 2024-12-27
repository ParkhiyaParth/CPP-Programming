#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, x,change=0;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mini = a[0], maxi = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
        }
        if (a[i] < mini)
        {
            mini = a[i];
        }
        if (maxi - mini > 2 * x)
        {
            change++;
            mini = maxi = a[i];
        }
    }
    cout << change << endl;
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