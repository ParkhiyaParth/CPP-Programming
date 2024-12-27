#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
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
    vector<int> b;
    set<int> s;
    for (int i = 1; i <= n; i++) {
        s.insert(i);
    }
    for(int i=0;i<n;i++){
        if(s.find(a[i])!=s.end()){
            b.push_back(a[i]);
            s.erase(a[i]);
        }
        else{
            b.push_back(*s.begin());
            s.erase(s.begin());
        }
    }
    for (int i=0;i<n;i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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