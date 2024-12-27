#include <iostream>
#include <vector> // Include vector header
#define ll long long
using namespace std;

void solve() {
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    
    if (s < (k * b) || s > (k * b) + n * (k - 1)) {
        cout << -1 << endl;
        return;
    }

    vector<ll> v(n, 0); 
    v[0] = k * b; 
    s -= k * b; 
    
    
    for (int i = 0; i < n && s > 0; i++) {
        ll add = min(s, k - 1); 
        v[i] += add; 
        s -= add; 
    }
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
