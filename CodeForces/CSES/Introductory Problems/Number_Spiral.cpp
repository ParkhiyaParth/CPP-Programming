#include <iostream>
using namespace std;
void solve() {
    long long y, x;
    cin >> y >> x;
    long long result;
    if (y >= x) {
        if (y % 2 == 0) {
            result = y * y - x + 1;
        } else {
            result = (y - 1) * (y - 1) + x;
        }
    } else {
        if (x % 2 == 0) {
            result = (x - 1) * (x - 1) + y;
        } else {
            result = x * x - y + 1;
        }
    }
    cout << result << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}