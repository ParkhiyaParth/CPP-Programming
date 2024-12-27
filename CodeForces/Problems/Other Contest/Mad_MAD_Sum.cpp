#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int sum = 0;
    map<int,int> mapi;
    for(int j=1;j<=2;j++){
        for(int i=1;i<=n;i++){
            sum+=a[i];
        }
        int mad = 0;
        for(int i=1;i<=n;i++){
            mapi[a[i]]++;
            if(mapi[a[i]]==2) {
                mad = max(a[i], mad);
            }
            a[i]=mad;
        }
        mapi.clear();
    }
    // debug(a);
    int ans = sum;
    int suff = 0;
    for (int i = 0; i < n; i++) {
        ans+=(n-i)*a[i+1];
    }
    cout << ans << '\n';
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