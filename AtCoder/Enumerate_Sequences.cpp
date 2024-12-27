#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void gen(vector<int>& curr, const vector<int>& R, int N, int K, int pos, int sum) {
    if (pos == N) {
        if (sum % K == 0) {
            for (int i = 0; i < N; ++i) {
                cout << curr[i] << (i == N-1 ? '\n' : ' ');
            }
        }
        return;
    }
    for (int i = 1; i <= R[pos]; ++i) {
        curr[pos] = i;
        gen(curr, R, N, K, pos + 1, sum + i);
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> curr(n);
    gen(curr, v, n, k, 0, 0);
    return 0;
}
