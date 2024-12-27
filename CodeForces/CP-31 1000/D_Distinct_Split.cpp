#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    set<char> se;
    for (int i = 0; i < n; i++)
    {
        se.insert(s[i]);
        a[i] = se.size();
    }
    se.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        se.insert(s[i]);
        b[i] = se.size();
    }
    int maxi = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, a[i] + b[i + 1]);
    }
    cout << maxi << endl;
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