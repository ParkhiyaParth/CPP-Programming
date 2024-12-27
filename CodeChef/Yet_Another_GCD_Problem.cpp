#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
const int MAX = 2000000;
using namespace std;
vector<int> generatePrimes(int n)
{
    vector<bool> isPrime(MAX + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= MAX; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = 2 * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
        if (primes.size() >= n)
            break;
    }
    return primes;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int total = (n * (n - 1)) / 2;
    if (k > total)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> r = generatePrimes(n);
    int sz = r.size();
    int pair = 0;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (__gcd(r[i], r[j]) == 1)
            {
                pair++;
            }
            if (pair == k)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << r[i] << " ";
                }
                cout << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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