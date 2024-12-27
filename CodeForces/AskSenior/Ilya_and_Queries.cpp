#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v(s.size(), 0);
    for (int i = 1; i < s.size(); i++)
    {
        v[i] = v[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << v[r - 1] - v[l - 1] << endl;
    }
    return 0;
}