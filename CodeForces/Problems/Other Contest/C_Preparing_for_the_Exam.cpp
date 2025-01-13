#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> A(M), Q(K);

    for (auto &a : A)
        cin >> a;

    for (auto &q : Q)
        cin >> q;

    if (K == N)
    {
        cout << string(M, '1') << '\n';
        return;
    }

    if (K < N - 1)
    {
        cout << string(M, '0') << '\n';
        return;
    }

    int missing = 0;

    for (int x = 1; x <= N; x++)
        missing ^= x;

    for (auto &q : Q)
        missing ^= q;

    for (auto &a : A)
        cout << (missing == a);

    cout << '\n';
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