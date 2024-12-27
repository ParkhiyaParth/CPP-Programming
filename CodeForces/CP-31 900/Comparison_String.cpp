#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >>s;
    int maxi=1;
    int cn=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            cn=1;
        }else{
            cn++;
        }
        maxi=max(cn,maxi);
    }
    cout << maxi+1 << endl;
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