#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    int max_freq = 0;
    for (auto &entry : freq) {
        if (entry.second > max_freq) {
            max_freq = entry.second;
        }
    }
    int min_cost = n - max_freq;
    cout << min_cost << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}