#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    for(auto e:mp){
        if(e.second%2){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl; 
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