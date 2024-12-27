#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n=s.size();
    // if(n==2){
    //     cout << "DA" << endl;
    //     return;
    // }
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    int minn=min(zero,one);
    if(minn%2==1){
        cout << "DA" << endl;
    }
    else{
        cout << "NET" << endl;
    }
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