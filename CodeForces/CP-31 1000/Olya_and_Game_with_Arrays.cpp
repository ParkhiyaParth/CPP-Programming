#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int minAll = INT_MAX;
    vector<int> dump;
    while (n--)
    {
        int m;
        cin >> m;
        vector<int> v(m);

        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        int min_el = *min_element(v.begin(), v.end());
        minAll = min(minAll, min_el);
        v.erase(find(v.begin(), v.end(), min_el));
        dump.push_back(*min_element(v.begin(), v.end()));
    }
    ll sum = 0;
    for (int i = 0; i < dump.size(); i++)
    {
        sum += dump[i];
    }
    ll b=minAll + sum - *min_element(dump.begin(), dump.end());
    cout << b << endl;
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