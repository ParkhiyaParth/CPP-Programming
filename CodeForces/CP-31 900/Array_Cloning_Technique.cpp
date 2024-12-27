#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (auto i : v)
    {
        mp[i]++;
    }
    int freq = 0;
    for (auto ch : mp)
    {
        freq = max(freq, ch.second);
    }
    int op=0;
    while(freq<n){
        op++;
        if(n-freq>=freq){
            op+=freq;
            freq*=2;
        }
        else{
            op+=n-freq;
            freq=n;
        }
    }
    cout << op << endl;
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