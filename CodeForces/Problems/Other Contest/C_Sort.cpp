#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a;
    cin >> b;
    vector<vector<int>> v1(n + 1, vector<int>(26, 0));
    vector<vector<int>> v2(n + 1, vector<int>(26, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            v1[i][j] = v1[i - 1][j];
            v2[i][j] = v2[i - 1][j];
        }
        v1[i][a[i - 1] - 'a']++;
        v2[i][b[i - 1] - 'a']++;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = 0;
        for (int j = 0; j < 26; j++)
        {
            int x = abs(v1[r][j] - v1[l - 1][j]);
            int y = abs(v2[r][j] - v2[l - 1][j]);
            ans += abs(x - y);
        }
        if (ans % 2 == 0)
        {
            cout << ans / 2 << endl;
        }
        else
        {
            cout << ans / 2 + 1 << endl;
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