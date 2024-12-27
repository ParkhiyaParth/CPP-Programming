#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int al = 0;
    int b = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (k > 0)
        {
            int temp = min(abs(v[i] - v[i - 1]), k);
            v[i] += temp;
            k -= temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            al += v[i];
        }
        else
        {
            b += v[i];
        }
    }
    cout << abs(al - b) << endl;
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