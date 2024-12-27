#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int isVis(int m, int k, vector<int>& a)
{
    auto getsum = [&](int i, int j)
    {
        if (i == 0)
        {
            return a[j];
        }
        else
        {
            return a[j] - a[i - 1];
        }
    };
    int st = 0, end = m;
    int ans = 0;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        int req = (m - mid + 1) * k - getsum(mid, m);
        if (req <= mid)
        {
            ans = m - mid + 1;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> prefix(n);
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        int k;
        cin >> k;
        int ans = 0;
        int end = upper_bound(a.begin(), a.end(), k - 1) - a.begin();
        ans += n - end;
        ans += isVis(end - 1, k, prefix);
        cout << ans << endl;
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
