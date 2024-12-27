#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void twh(int n, int a, int b, int c)
{
    if (n == 1)
    {
        cout << a << " " << c << endl;
        return;
    }
    twh(n - 1, a, c, b);
    cout << a << " " << c << endl;
    twh(n - 1, b, a, c);
    return;
}
int main()
{
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    twh(n, 1, 2, 3);
    return 0;
}