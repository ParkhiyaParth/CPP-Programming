#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,cnt=0,mx=0;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s+=s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            cnt=0;
            while(s[i]!='g' && i<s.size())
            {
                cnt++;
                i++;
            }
            mx=max(mx,cnt);
        }
    }
    cout << mx << endl;
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