#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    vector<int> ca(26, 0), cb(26, 0);
    for (int i = 0; i < n; i++)
    {
        ca[a[i] - 'a']++;
        cb[b[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (ca[i] < cb[i])
        {
            cout << "No" << endl;
            return;
        }
        ca[i] -= cb[i];
        if (ca[i] % k != 0)
        {
            cout << "No" << endl;
            return;
        }
        if (i < 25)
        {
            ca[i + 1] += ca[i];
        }
    }
    cout << "Yes" << endl;
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