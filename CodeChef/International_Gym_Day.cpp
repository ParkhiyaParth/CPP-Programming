#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool fd(int v, int d, int x, int y) {
    double dp = (100 - d * v) * x / 100.0;
    int rem = y - v;
    return dp <= rem;
}

void solve() {
    int d, x, y;
    cin >> d >> x >> y;

    if (y >= x) {
        cout << 0 << endl;
        return;
    }

    int low = 0, high = y, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (fd(mid, d, x, y)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << (ans != -1 ? ans : -1) << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}