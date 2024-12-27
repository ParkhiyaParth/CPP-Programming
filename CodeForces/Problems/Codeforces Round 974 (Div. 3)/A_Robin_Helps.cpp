#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    int cnt=0;
    int g=0;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>=k){
            g+=v[i];
        }
        else if(v[i]==0 && g>0){
            g--;
            cnt++;
        }
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