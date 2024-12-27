#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum*-1 << endl;
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