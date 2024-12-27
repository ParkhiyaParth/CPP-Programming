#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> prefixSum(N + 1);
    for (int i = 1; i <= N; ++i) {
        prefixSum[i] = (prefixSum[i - 1] + A[i - 1]) % M;
    }

    vector<int> freq(M, 0);
    long long count = 0;
    for (int i = 1; i <= N; ++i) {
        int r = prefixSum[i];
        count += freq[r];
        freq[r]++;
    }

    // Handle the case where the total distance is a multiple of M
    if (prefixSum[N] == 0) {
        count++;
    }

    cout << count << endl;

    return 0;
}