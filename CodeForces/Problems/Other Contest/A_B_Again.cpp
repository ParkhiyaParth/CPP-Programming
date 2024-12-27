#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        sum += last;
        n = n / 10;
    }
    cout << sum << endl;
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
