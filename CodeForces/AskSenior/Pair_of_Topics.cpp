#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    long ans = 0;
    sort(c.begin(), c.end());
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (c[l] + c[r] > 0)
        {
            ans += (r - l);
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}