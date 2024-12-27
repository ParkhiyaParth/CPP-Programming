#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    int e=0;
    int o=0;
    for(auto i:mp){
        e+=(i.second%2==0);
        o+=(i.second%2!=0);
    }
    if(o>k+1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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