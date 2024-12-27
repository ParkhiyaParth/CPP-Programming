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
    vector<int> shuf(n);
    for (int i = 0; i < n; i++)
    {
        shuf[i] = i + 1;
    }
    int i = 0;
    while (i < n)
    {
        int curr = v[i];
        int st = i;
        int end = i;
        while (end < n && v[end] == curr)
        {
            end++;
        }
        if (st == end - 1)
        {
            cout << -1 << endl;
            return;
        }
        rotate(shuf.begin() + st, shuf.begin() + st + 1, shuf.begin() + end);
        i = end;
    }
    for (auto i : shuf)
    {
        cout << i << " ";
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