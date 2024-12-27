#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (auto a : arr)
    {
        mp[a]++;
    }
    if (mp.size() == 1)
    {
        cout << "-1" << endl;
        return;
    }
    else
    {
        int ele = begin(mp).first;
        int fre = begin(mp).second;
        cout << freq << " " << n - freq << endl;
        for (int i = 0; i < freq; i++)
        {
            cout << ele << " ";
        }
        cout << endl;
        mp.erase(ele);
        for (auto [e, f]: mp)
        {
            for (int i = 0; i < f; i++)
            {
                cout << e << " ";
            }
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