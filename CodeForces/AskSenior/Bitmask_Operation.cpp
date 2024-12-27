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
    int q, n;
    cin >> q >> n;
    for (int i = 0; i < q; i++)
    {
        int t, x;
        cin >> t >> x;
        switch (t)
        {
        case 1:
            cout << ((n >> x) & 1) << endl;
            break;
        case 2:
            n = n | (1 << x);
            cout << n << endl;
            break;
        case 3:
            n = n & ~(1 << x);
            cout << n << endl;
            break;
        case 4:
            n = n ^ (1 << x);
            cout << n << endl;
            break;

        default:
            cout << 0 << endl;
            break;
        }
    }
    return 0;
}