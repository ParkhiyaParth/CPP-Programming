#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> vp(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }

    stack<pair<int, int>> s; // Pair of (count, value)

    int strength = 0;
    for (int i = 0; i < n; i++) {
        int count = vp[i].first, value = vp[i].second;

        while (!s.empty() && s.top().second == value) {
            count += s.top().first;
            s.pop();
        }

        s.push({count, value});
        strength += count;
        ans[i] = strength;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
