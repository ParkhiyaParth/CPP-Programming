#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < q; i++)
    {

        int l, r;
        cin >> l >> r;
        vector<int> fa(26, 0);
        vector<int> fb(26, 0);
        for (int i = l; i <= r; i++)
        {
            fa[a[i] - 'a']++;
            fb[b[i] - 'b']++;
        }
        int c = 0;
        for (int i = 0; i < 26; i++)
        {
            c += abs(fa[i] - fb[i]);
        }
        cout << c / 2 << endl;
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