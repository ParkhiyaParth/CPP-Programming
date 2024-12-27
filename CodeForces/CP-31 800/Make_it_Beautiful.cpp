#include <iostream>
#include <bits/stdc++.h>
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
    swap(a[0],a[1]);
    swap(a[n-1],a[0]);
    
    if(a[0]==a[1]){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
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