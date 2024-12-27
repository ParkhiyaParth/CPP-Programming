#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int x,y;
    cin >> x >> y;
    cout << min(x,y) << " " << max(x,y) << endl;
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