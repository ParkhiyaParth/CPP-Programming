#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}