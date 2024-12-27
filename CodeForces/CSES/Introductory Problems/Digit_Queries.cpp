#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> powers(19, 1);
    for (int i = 1; i < 19; i++)
    {
        powers[i] = powers[i - 1] * 10;
    }
    ll numDig = 0;
    ll digitlength = 0;
    ll prevdig = 0;
    for (int i = 1; i < 19; i++)
    {
        digitlength += (powers[i] - powers[i - 1]) * i;
        if (digitlength >= n)
        {
            numDig = i;
            break;
        }
        prevdig = digitlength;
    }
    ll low = powers[numDig - 1];
    ll high = powers[numDig] - 1;
    ll ans = 0;
    ll startPoans = 0;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll startPos = (mid - powers[numDig - 1]) * numDig + prevdig + 1;
 
        if (startPos <= n)
        {
            if (mid > ans)
            {
                ans = mid;
                startPoans = startPos;
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    string s = to_string(ans);
    cout << s[n - startPoans] << endl;
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