#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, d, team = 0;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = -1;
    int j = n - 1;
    int curr = v[j];
    while (i < j)
    {
        ll maxp = v[j];
        if (curr <= d)
        {
            i++;
            curr += maxp;
        }
        else
        {
            team++;
            j--;
            curr = v[j];
        }
    }
    cout << team << endl;
    return 0;
}