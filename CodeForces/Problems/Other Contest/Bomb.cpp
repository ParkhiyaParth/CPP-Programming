#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// int maximum(vector<pair<int, int>> vp)
// {
//     int maxi = 0;
//     for (int i = 0; i < vp.size(); i++)
//     {
//         maxi = max(maxi, vp[i].first);
//     }
//     return maxi;
// }
void solve()
{
    int n, k;
    cin >> n >> k;
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
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i] = make_pair(a[i], b[i]);
    }
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, p[i].first);
        }
        for (int i = 0; i < n; i++)
        {
            if(maxi==p[i].first){
                p[i].first=max(0,p[i].first-p[i].second);
            }
        }
        score+=maxi;
        k--;
    }
    cout << score << endl;
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