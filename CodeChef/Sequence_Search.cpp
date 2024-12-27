#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    
    if (k == 1) {
        cout << 0 << endl;
        return;
    } else if (k == 2) {
        cout << a << endl;
        return;
    } else if (k == 3) {
        cout << b << endl;
        return;
    }
    
    vector<int> res(k);
    res[0] = 0;
    res[1] = a;
    res[2] = b;
    
    for (int i = 3; i < k; i++) {
        res[i] = res[i-1] + res[i-2] - res[i-3];
    }
    
    cout << res[k-1] << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}