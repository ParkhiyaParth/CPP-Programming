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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> q;
    
    while (q--)
    {
        int i;
        cin >> i;
        i--;
        int ans = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                ans = j+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}