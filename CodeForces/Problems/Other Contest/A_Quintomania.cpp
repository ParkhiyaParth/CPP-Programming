#include <iostream>
#include <bits/stdc++.h>
#define ll long long
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
    vector<int> s;
    for (int i = 0; i < n - 1; i++)
    {
        s.push_back(abs(a[i] - a[i + 1]));
    }
    bool ans = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 5 || s[i] == 7)
        {
            ans = true;
        }
        else
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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