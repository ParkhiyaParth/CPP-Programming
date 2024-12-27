#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 1; i < n; i++)
    {
        s.insert(i);
    }
    vector<int> a(n + 1);
    int p = 1;
    while (p * 2 <= n)
    {
        p *= 2;
    }
    if (n & 1)
    {
        cout << n << endl;
        int low = n & (-n);
        a[n - 3] = low;
        a[n - 2] = low + (low == 1 ? 2 : 1);
        a[n - 1] = n - low;
        a[n] = n;
    }
    else
    {
        cout << p * 2 - 1 << endl;
        if (n == p)
        {
            a[n - 4] = 1, a[n - 3] = 3, a[n - 2] = n - 2, a[n - 1] = n - 1, a[n] = n;
        }
        else
        {
            a[n - 2] = n, a[n - 1] = n - 1, a[n] = p - 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        s.erase(a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
        {
            a[i] = *s.begin();
            s.erase(a[i]);
        }
    }
    for (int i = 1; i <= n; i++)
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