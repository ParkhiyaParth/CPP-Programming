#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> c1(n + n + 1, 0);
    vector<int> c2(n + n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && a[j] == a[i])
        {
            j++;
        }
        c1[a[i]] = max(c1[a[i]], j - i);
        i = --j;
    }
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && b[j] == b[i])
        {
            j++;
        }
        c2[b[i]] = max(c2[b[i]], j - i);
        i = --j;
    }
    int ans = 0;
    for (int i = 0; i < n + n + 1; i++)
    {
        ans = max(ans, c1[i] + c2[i]);
    }
    cout << ans << endl;
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