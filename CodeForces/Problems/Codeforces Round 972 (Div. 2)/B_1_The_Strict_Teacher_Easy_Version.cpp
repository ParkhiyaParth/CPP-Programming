#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> cell(m);
    vector<int> quries(q);
    for (int i = 0; i < m; i++)
    {
        cin >> cell[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> quries[i];
    }
    sort(cell.begin(), cell.end());
    for (int i = 0; i < q; i++)
    {
        int po = quries[i];
        int it = lower_bound(cell.begin(), cell.end(), po) - cell.begin();
        if (it == 0)
        {
            cout << cell[0] - 1 << " ";
        }
        else if (it == m)
        {
            cout << n - cell[m - 1] << " ";
        }
        else
        {
            cout << (cell[it] - cell[it - 1]) / 2 << " ";
        }
        cout << endl;
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