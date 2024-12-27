#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << i + 2 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}