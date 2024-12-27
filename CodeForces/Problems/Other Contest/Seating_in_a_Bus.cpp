#include <iostream>
#include <bits/stdc++.h>
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
    set<int> st;
    bool isValid = true;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.insert(v[i]);
            continue;
        }
        if (st.count(v[i] - 1) || st.count(v[i] + 1))
        {
            st.insert(v[i]);
            continue;
        }
        isValid = false;
        break;
    }
    if (isValid)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
