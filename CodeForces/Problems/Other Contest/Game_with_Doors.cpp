#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int l, r, L, R;
    cin >> l >> r;
    cin >> L >> R;
    int l1 = max(l, L);
    int l2 = min(r, R);
    if (l2 < l1)
    {
        cout << 1 << endl;
        return;
    }
    int ans = l2 - l1;
    if (l < l1 || L < l1)
    {
        ans++;
    }
    if (r > l2 || R > l2)
    {
        ans++;
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