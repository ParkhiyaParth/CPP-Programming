#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    set<int> s;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        string r;
        cin >> r;
        int a = -1, b = -1;
        for (int j = 0; j < m; j++)
        {
            if (r[j] == 'S')
            {
                a = j;
            }
            if (r[j] == 'G')
            {
                b = j;
            }
        }
        if (b > a)
        {
            ans = false;
            break;
        }
        s.insert(b - a);
    }
    if (ans == false)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << s.size() << endl;
    }
    return 0;
}