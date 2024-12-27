#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> d(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        d[a]++;
        d[b]++;
    }
    int r = d[1];
    if (r % 2 == 0)
    {
        cout << "O" << endl;
    }
    else
    {
        cout << "F" << endl;
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