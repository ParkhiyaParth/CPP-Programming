#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    set<int> po;
    int p1 = 2 * a - b;
    po.insert(p1);
    int p2 = 2 * b - a;
    po.insert(p2);
    if ((a + b) % 2 == 0)
    {
        int p3 = (a + b) / 2;
        po.insert(p3);
    }
    cout << po.size() << endl;
    return 0;
}