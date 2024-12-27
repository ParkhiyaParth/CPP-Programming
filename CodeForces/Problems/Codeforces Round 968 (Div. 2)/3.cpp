#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// string r(string s){
//     string ans="";
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (i == 1 || i == 2)
//         {
//             continue;
//         }
//         else
//         {
//             ans += s[i];
//         }
//     }
//     return ans;
// }
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string ans = "";
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        ans += s[low];
        ans += s[high];
        low++;
        high--;
    }
    if (low == high)
    {
        ans += s[low];
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