#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    if(a+b>=n-1){
        if(a==n && b==n){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "Yes" << endl;
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