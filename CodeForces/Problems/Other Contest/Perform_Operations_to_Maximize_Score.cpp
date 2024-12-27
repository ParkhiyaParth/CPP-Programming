#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<ll, int>> candidates;
        for (int i = 0; i < n; i++) {
            if (b[i] == 1) {
                candidates.push_back({a[i], i});
            }
        }

        sort(candidates.rbegin(), candidates.rend());

        ll total_ops = k;
        ll max_score = 0;
        for (auto [val, idx] : candidates) {
            ll ops = min(total_ops, n - 1); // At most n-1 operations for median calculation
            ll new_val = val + ops;
            ll approx_median = (a.size() - 1) / 2; // Approximate median index
            ll score = new_val + a[approx_median];
            max_score = max(max_score, score);
            total_ops -= ops;
        }

        cout << max_score << endl;
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