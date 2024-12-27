#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    vector<int> chk(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        if (chk[i])
        {
            continue;
        }
        int j = a[i];
        int cnt = 1;
        while (j != i)
        {
            chk[j] = 1;
            j = a[j];
            cnt++;
        }
        chk[i] = 1;
        if (cnt <= 2)
        {
            continue;
        }
        ans += (cnt - 1) / 2;
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