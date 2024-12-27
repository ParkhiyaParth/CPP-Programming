#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    // if(n==1
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i!=0){
            break;
        }
        cnt++;
    }
    cout << cnt << endl;
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
