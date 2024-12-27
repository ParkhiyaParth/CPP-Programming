#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n*k];
    for(int i=0;i<n*k;i++){
        cin >> arr[i];
    }
    ll sum=0;
    int med=(n+1)/2;
    int x=n-med;
    int dummy=k;
    int i=(n*k)-x-1;
    while(dummy--){
        sum+=arr[i];
        i=i-x-1;
    }
    cout << sum << endl;
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