#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,b,ans=0;
    cin >> n;
    // vector<int>v(n);
    for(int i=1;i<=n;i++){
        cin >> b;
        if(abs(b-i)!=0){
            ans=__gcd(ans,abs(b-i));
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