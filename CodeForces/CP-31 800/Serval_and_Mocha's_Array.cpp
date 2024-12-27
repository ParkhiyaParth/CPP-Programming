#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (__gcd(v[i], v[j]) <= 2)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
    // int gcccd=__gcd(v[0],v[1]);
    // if((gccd<=gcccd) && (gcccd<=2) && (gccd<=2)){
    //     cout << "YES" << endl;
    // }
    // else{
    //     cout << "NO" << endl;
    // }
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