#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int w, h;
    cin >> w >> h;
    vector<int> x1, x2, y1, y2;
    for (int i = 0; i < 2; ++i) {
        int k;
        cin >> k;
        vector<int> temp(k);
        for (int j = 0; j < k; ++j) {
            cin >> temp[j];
        }
        if (i == 0) x1 = temp; 
        else x2 = temp;
    }
    for (int i = 0; i < 2; ++i) {
        int k;
        cin >> k;
        vector<int> temp(k);
        for (int j = 0; j < k; ++j) {
            cin >> temp[j];
        }
        if (i == 0) y1 = temp;
        else y2 = temp;
    }

    ll max_area = 0;
    max_area = max(max_area, 1LL * (x1.back() - x1.front()) * h);
    max_area = max(max_area, 1LL * (x2.back() - x2.front()) * h);
    max_area = max(max_area, 1LL * (y1.back() - y1.front()) * w);
    max_area = max(max_area, 1LL * (y2.back() - y2.front()) * w);

    cout << max_area << endl;
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