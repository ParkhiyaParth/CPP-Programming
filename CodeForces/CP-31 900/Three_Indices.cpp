#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            cout << "YES" << endl;
            cout << i << " " << i+1 << " "<<i+2<<endl;
            return;
        }
    }
    cout << "NO" << endl;
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