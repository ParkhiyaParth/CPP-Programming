#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a,b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << " " << 0 << endl;
    }
    else{
        ll g=abs(a-b);
        ll m=min(b%g,g-b%g);
        cout << g << " " << m << endl;
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