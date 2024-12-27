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
    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 2)
    {
        cout << 3 << endl;
    }
    else if (a == 1 && b == 3)
    {
        cout << 2 << endl;
    }
    else if (a == 2 && b == 3)
    {
        cout << 1 << endl;
    }
    else if (a == 2 && b == 1)
    {
        cout << 3 << endl;
    }
    else if (a == 3 && b == 1)
    {
        cout << 2 << endl;
    }
    else if (a == 3 && b == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}