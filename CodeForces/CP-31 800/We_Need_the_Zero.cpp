#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ a[i];
    }
    if (sum == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (n % 2 == 1)
        {
            cout << sum << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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