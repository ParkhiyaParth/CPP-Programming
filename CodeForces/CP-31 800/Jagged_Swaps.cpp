#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool ans=false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxi=*max_element(v.begin(),v.end());
    int mini=*min_element(v.begin(),v.end());
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] < v[i] && v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
        }
        if(maxi==v[n-1] && mini==v[0]){
            ans=true;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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