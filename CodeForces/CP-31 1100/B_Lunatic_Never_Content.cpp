#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll check(vector<ll>&v){
    ll ans=0;
    ll n=v.size();
    for(ll i=0;i<n;i++){
        ans=__gcd(ans,abs(v[i]-v[(n-i-1)]));
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int low=1;
    // int high=INT_MAX;
    // while(low<=high){
    //     int mid=(low+high)/2;
    //     vector<int> v;
    //     for(int i=0;i<n;i++){
    //         v.push_back(a[i]%mid);
    //     }
    //     if(check(v)){
    //         cout<<mid<<endl;
    //         return;
    //     }
    //     high=mid-1;
        
    // }
    cout<<check(a)<<endl;
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