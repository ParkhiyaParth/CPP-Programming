#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    for(int j=1;j<=9;j++){
        int x=j;
        while(x<=n){
            ans++;
            x*=10;
        }
    }
    cout << ans << endl;
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