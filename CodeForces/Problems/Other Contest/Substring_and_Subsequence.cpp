#include <iostream>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int s1 = a.size();
    int s2 = b.size();
    int n = s1 + s2;
    for (int i = 0; i < s2; i++)
    {
        int j = i;
        for (auto c : a)
        {
            if (j < s2 && c == b[j])
            {
                j++;
            }
            n = min(n, s1 + s2 - (j - i));
        }
    }
    cout << n << endl;
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