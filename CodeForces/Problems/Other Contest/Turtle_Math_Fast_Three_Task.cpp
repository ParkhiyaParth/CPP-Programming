#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int nnn;
    cin >> nnn;
    vector<int>v(nnn);
    int sum=0;
    bool hv=false;
    for(int i=0;i<nnn;i++){
        cin >> v[i];
        sum+=v[i];
        if(v[i]%3==1){
            hv=true;
        }
    }
    if(sum%3==0){
        cout << 0 << endl;
    }
    else if(sum%3==2){
        cout << 1 << endl;
    }
    else{
        if(hv){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
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