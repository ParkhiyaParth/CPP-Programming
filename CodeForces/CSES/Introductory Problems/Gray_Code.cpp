#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> ans;
    ans.push_back("0");
    ans.push_back("1");
    for (int i = 2; i <= n; i++)
    {
        int sz = ans.size();
        for (int i = sz - 1; i >= 0; i--)
        {
            ans.push_back(ans[i]);
        }
        for (int i = 0; i < sz; i++)
        {
            ans[i] = "0" + ans[i];
            ans[i + sz] = "1" + ans[i + sz];
        }
    }
    for (auto i : ans)
    {
        cout << i << endl;
    }
    return 0;
}