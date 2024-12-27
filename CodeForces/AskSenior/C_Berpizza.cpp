#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int q;
    cin >> q;
    vector<int> m;
    set<int> t;
    set<pair<int, int>> c;
    for (int i = 0; i < q; i++)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int x;
            cin >> x;
            m.push_back(x);
            t.emplace((int)m.size() - 1);
            c.emplace(~x, (int)m.size() - 1);
        }
        else
        {
            int i = (op == 2 ? *t.begin() : c.begin()->second);
            t.erase(i);
            c.erase(make_pair(~m[i], i));
            cout << i + 1 << " ";
        }
    }
    return 0;
}