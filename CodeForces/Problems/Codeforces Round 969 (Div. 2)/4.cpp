#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int MAX_N = 200005;

vector<int> tree[MAX_N];
int score;
string s;

// DFS function to calculate the weight of leaves
int dfs(int node, int parent) {
    int count_10 = 0, count_01 = 0;
    
    for (int child : tree[node]) {
        if (child != parent) {
            int result = dfs(child, node);
            if (result > 0) count_10 += result;
            else count_01 -= result;
        }
    }
    
    if (count_10 == 0 && count_01 == 0) {
        // Leaf node, calculate its weight
        return s[node - 1] == '1' ? 1 : -1;
    } else {
        // Internal node, add to score if non-zero weight
        int weight = count_10 - count_01;
        if (weight != 0) score++;
        return weight;
    }
}

void solve() {
    int n;
    cin >> n;

    // Clear the tree for the current test case
    for (int i = 1; i <= n; i++) {
        tree[i].clear();
    }

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    cin >> s;
    
    // Reset score
    score = 0;
    
    // Start DFS from the root (vertex 1)
    dfs(1, -1);
    
    // Output the score for this test case
    cout << score << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
