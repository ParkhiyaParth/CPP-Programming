#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int v1[n];
    int v2[n];
    int ra = 0;
    int rb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] > v2[i])
        {
            ra += v1[i];
        }
        if (v1[i] < v2[i])
        {
            rb += v2[i];
        }
        if (v1[i] == 1 && v2[i] == 1)
        {
            sum1 += 1;
        }
        if (v1[i] == -1 && v2[i] == -1)
        {
            sum2 += 1;
        }
    }
    for (int i = 0; i < sum2; i++)
    {
        if (ra > rb)
        {
            ra -= 1;
        }
        else
        {
            rb -= 1;
        }
    }
    for (int i = 0; i < sum1; i++)
    {
        if (ra < rb)
        {
            ra += 1;
        }
        else
        {
            rb += 1;
        }
    }
    cout << min(ra, rb) << endl;
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