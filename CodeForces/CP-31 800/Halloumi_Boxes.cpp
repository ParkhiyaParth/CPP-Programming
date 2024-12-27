#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numberOfBoxes, numberOfReverse;
    cin >> numberOfBoxes >> numberOfReverse;
    vector<int> v(numberOfBoxes);
    for (int i = 0; i < numberOfBoxes; i++)
    {
        cin >> v[i];
    }
    if (numberOfReverse == 1 && !is_sorted(v.begin(), v.end()))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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