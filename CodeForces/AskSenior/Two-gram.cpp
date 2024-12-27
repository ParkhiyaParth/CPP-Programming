#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    cin >> s;
    for (int i = 0; i < sz(s); i += 2)
        c[s[i] - '0']++;
    int k = 0;
    for (int i = 1; i <= 3; i++)
        for (int j = 0; j < c[i]; j++)
        {
            s[k] = char('0' + i);
            k += 2;
        }
    cout << s << endl;
    return 0;
    return 0;
}