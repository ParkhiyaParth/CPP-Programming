#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

long long modInverse(long long a, long long m) {
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0, sum_sq = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum = (sum + v[i]) % MOD;
        sum_sq = (sum_sq + 1LL * v[i] * v[i]) % MOD;
    }
    
    long long total_pairs = (1LL * n * (n - 1) / 2) % MOD;
    long long total_sum = (sum * sum % MOD - sum_sq + MOD) % MOD;
    
    long long result = total_sum * modInverse(total_pairs, MOD) % MOD;
    
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
