#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
    {
        cnt += n / i;
    }
    cout << cnt << endl;
    return 0;
}
