// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// #define mod 998244353
// string dec2bin(ll n)
// {
//     string s = "";
//     bool z = true;
//     for (int i = 64; i >= 0; i--)
//     {
//         ll k = n >> i;
//         if (k & 1)
//         {
//             s += "1";
//             z = false;
//         }
//         else if (!z)
//         {
//             s += "0";
//         }
//     }
//     return s.empty() ? "0" : s;
// }
// void solve()
// {
//     ll n;
//     cin >> n;
//     string s = "";
//     for (int i = 1; i <= n; i++)
//     {
//         s += dec2bin(i);
//     }
//     cout << stoll(s) % mod << endl;
// }
// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 998244353

string dec2bin(ll n)
{
    string s = "";
    bool z = true;
    for (ll i = 31; i >= 0; i--)
    {
        ll k = n >> i;
        if (k & 1)
        {
            s += "1";
            z = false;
        }
        else if (!z)
        {
            s += "0";
        }
    }
    return s.empty() ? "0" : s;
}

void solve()
{
    ll n;
    cin >> n;
    string s = "";
    for (ll i = 1; i <= n; i++)
    {
        s += dec2bin(i);
    }
    ll ans = 0, pow = 1;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        ans += (pow * (s[i] - '0'));
        pow *= 10;
    }
    cout << ans % mod << endl;
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