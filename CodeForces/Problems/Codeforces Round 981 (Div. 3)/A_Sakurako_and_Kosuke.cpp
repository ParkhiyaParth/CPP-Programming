#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x = 0;
    int i = 1;
    bool sakurakoTurn = true;
    while (true)
    {
        if (sakurakoTurn)
        {
            x -= (2 * i - 1);
        }
        else
        {
            x += (2 * i - 1);
        }
        if (x < -n || x > n)
        {
            if (!sakurakoTurn)
            {
                cout << "Kosuke" << endl;
            }
            else
            {
                cout << "Sakurako" << endl;
            }
            break;
        }
        sakurakoTurn = !sakurakoTurn;
        i++;
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