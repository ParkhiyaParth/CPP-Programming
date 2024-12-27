#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    int as = 0;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        as += st.size();
    }
    cout << as << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}