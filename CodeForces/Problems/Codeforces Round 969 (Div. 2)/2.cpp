#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxi = *max_element(v.begin(), v.end());
    while (m--)
    {
        char op;
        int l, r;
        cin >> op >> l >> r;
        if (l <= maxi && maxi <= r)
        {
            if (op == '-')
            {
                maxi--;
            }
            else
            {
                maxi++;
            }
        }

        cout << maxi << " ";
    }
    cout << endl;
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