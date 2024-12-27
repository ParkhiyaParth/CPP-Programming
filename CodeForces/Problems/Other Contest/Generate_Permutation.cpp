#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        deque<int> dq;
        dq.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                dq.push_back(i);
            }
            else
            {
                dq.push_front(i);
            }
        }
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
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