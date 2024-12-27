#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans;
    if (k == 0)
    {
        ans = a[0] - 1;
    }
    else
    {
        ans = a[k - 1];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= ans)
        {
            ++cnt;
        }
    }
    if (cnt != k || !(1 <= ans && ans <= 1000 * 1000 * 1000))
    {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}