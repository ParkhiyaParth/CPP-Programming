#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<pair<double, int>> balls(n);
    for (int i = 0; i < n; i++) {
        balls[i] = {static_cast<double>(a[i]) / b[i], b[i]};
    }

    sort(balls.begin(), balls.end());

    int count = 0;
    int max_speed = 0;
    for (int i = 0; i < n; i++) {
        if (balls[i].second > max_speed) {
            count++;
            max_speed = balls[i].second;
        }
    }

    cout << count << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}