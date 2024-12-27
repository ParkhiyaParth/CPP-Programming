#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll p, q, l;
    cin >> l;
    cin >> p;
    cin >> q;
    cout << (double)(l * p) / (p + q) << endl;
    return 0;
}