#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    // swap(v[0][m],v[n-1][m]);

    if (n == 1 && m == 1)
    {
        cout << -1 << endl;
    }
    else if (m == 1)
    {
        swap(v[0][0], v[1][0]);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    cout << v[(i + 1) % n][(j + 1) % m] << ' ';
                }
                cout << '\n';
            }
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