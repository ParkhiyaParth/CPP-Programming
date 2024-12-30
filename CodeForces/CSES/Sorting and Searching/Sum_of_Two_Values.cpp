#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
// int main()
// {
//     ll n, x;
//     cin >> n >> x;
//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
    
//     cout << "IMPOSSIBLE" << endl;
//     return 0;
// }

string findLexicographicallyLargest(string word, int numFriends) {
    int n = word.size();
    string largest = "";
    
    for (int i = 0; i <= n - numFriends+1; ++i) {
        string current = word.substr(i, n - i);
        if (current > largest) {
            largest = current;
        }
    }
    
    return largest;
}

int main() {
    string word;
    int numFriends;
    cin >> word >> numFriends;
    
    cout << findLexicographicallyLargest(word, numFriends) << endl;
    
    return 0;
}