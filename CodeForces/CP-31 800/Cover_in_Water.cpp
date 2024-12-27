#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int action = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            action ++ ;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == s[i - 1] && s[i] != '#')
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << action << endl;
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