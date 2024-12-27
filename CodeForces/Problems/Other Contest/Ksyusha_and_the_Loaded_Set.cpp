#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    int m;
    cin >> m;

    vector<int> ans;

    for (int i = 0; i < m; ++i)
    {
        char op;
        int x;
        cin >> op >> x;

        if (op == '+')
        {
            s.insert(x);
        }
        else if (op == '-')
        {
            s.erase(x);
        }
        else
        {
            int k = x;
            int d = 1;
            while (s.count(d))
            {
                d++;
            }
            ans.push_back(d);
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
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