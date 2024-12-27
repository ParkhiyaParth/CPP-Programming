#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// void solve()
// {
    
// }
int main()
{
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     solve();
    // }
    int n, q;
    cin >> n >> q;
    unordered_map<int, int> mp;
    for (int i = 0; i < q; i++)
    {
        int z, x;
        cin >> z >> x;
        if (z == 1)
        {
            mp[x]++;
        }
        else if (z == 2)
        {
            cout << mp[x] << endl;
        }
    }
    return 0;
}