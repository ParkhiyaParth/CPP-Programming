#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool found = false;
    for (int i = 0; i <n; i++)
    {
        cin >> v[i];
    }
    int right = count(v.begin(), v.end(), 2);
    int left = 0;
    for (int k = 1; k < n; k++)
    {
        if (v[k-1] == 2)
        {
            left++;
            right--;
        }
        if (right == left)
        {
            cout << k << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << -1 << endl;
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