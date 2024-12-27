#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n, currSum = 0, ans = 0;
    string s;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        currSum += v[i];
    }
    cin >> s;
    int length = s.size();
    ll left = 0;
    ll right = n - 1;
    while (left < right)
    {
        while (left < right && s[left] != 'L')
        {
            currSum -= v[left];
            left++;
        }
        while (left < right && s[right] != 'R')
        {
            currSum -= v[right];
            right--;
        }
        if (right <= left)
        {
            break;
        }
        ans += currSum;
        currSum -= v[left];
        currSum -= v[right];
        left++;
        right--;
    }
    cout << ans << endl;
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