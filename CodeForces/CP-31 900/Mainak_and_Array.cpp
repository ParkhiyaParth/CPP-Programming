#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = v[n-1]-v[0];
    // last element is fixed
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(v[n-1] - v[i], ans);
    }
    //first element is fixed
    for (int i = 1; i < n; i++)
    {
        ans = max(v[i] - v[0], ans);
    }
    // rotating the array by n times is give the actuall array
    for (int i = 0; i < n-1; i++)
    {
        ans = max(v[i] - v[i + 1], ans);
    }
    cout << ans << endl;
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