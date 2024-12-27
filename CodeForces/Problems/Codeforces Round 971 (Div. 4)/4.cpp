#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    array<vector<bool>, 2> grid = {vector<bool>(n + 1, false), vector<bool>(n + 1, false)};
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        
        grid[y][x] = true;
    }

    int64_t t = 0;

    for (int x = 1; x < n; x++)
    {
        for (int y = 0; y <= 1; y++)
        {
            t += grid[y][x] && grid[!y][x - 1] && grid[!y][x + 1];
        }
    }

    for (int x = 0; x <= n; x++)
    {
        if (grid[0][x] && grid[1][x])
        {
            t += n - 2;
        }
    }

    cout << t << endl;
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