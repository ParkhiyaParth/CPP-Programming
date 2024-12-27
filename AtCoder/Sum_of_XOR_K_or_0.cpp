#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 998244353;
int main() {
    int test,M,K;
    cin >> test >> M >> K;
    vector<int> A(test);
    for (int i = 0; i < test; i++) {
        cin >> A[i];
    }
    vector<long long> xorSum(1 << test, 0);
    vector<int> count(1 << test, 0);
    long long res = 0;
    for (int mask = 1; mask < (1 << test); mask++) {
        int xorValue = 0;
        int bitCount = 0;
        for (int i = 0; i < test; i++) {
            if (mask & (1 << i)) {
                xorValue ^= A[i];
                bitCount++;
            }
        }
        if (bitCount % M == 0) {
            long long contribution = 1;
            for (int i = 0; i < K; i++) {
                contribution = (contribution * xorValue) % MOD;
            }
            res = (res + contribution) % MOD;
        }
    }
    cout << res << endl;
    return 0;
}
