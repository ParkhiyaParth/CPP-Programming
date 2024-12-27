#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int op = 0, countZero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            countZero++;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if ((v[i] == 0 && v[j] == 0) && j - i > 1)
    //         {
    //             op++;
    //             break;
    //         }
    //     }
    // }
    if (countZero == 1 || countZero == 0)
    {
        cout << 1 << endl;
    }
    else if (countZero == n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 2 << endl;
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