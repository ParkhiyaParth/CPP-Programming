#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int one=0;
    int zero=0;
    if(s.size()==1){
        cout << 1 << endl;
        return;
    }
    for(auto i:s){
        if(i=='1'){
            one++;
        }
        else{
            zero++;
        }
    }
    if(one==zero){
        cout << 0 << endl;
        return;
    }
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            if(one==0){
                sum+=s.size()-i;
                break;
            }
            one--;
        }
        if(s[i]=='1'){
            if(zero==0){
                sum+=s.size()-i;
                break;
            }
            zero--;
        }
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