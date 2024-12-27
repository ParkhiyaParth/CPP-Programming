#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR^=v[i];
    }
    if(XOR==0){
        cout << "Bob" << endl;
    }
    else{
        cout << "Alice" << endl;
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