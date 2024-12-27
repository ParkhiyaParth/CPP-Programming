#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    int ans=0;
    for(char c='A';c<='G';c++)
    {
        ans+=max(0,m-count(s.begin(), s.end(), c));
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