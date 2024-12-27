#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin >> v[i];
        // ans^=v[i];
    }
    int ans=accumulate(v.begin(),v.end(),v[0],std::bit_and<int>());
    cout <<ans<<endl;
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