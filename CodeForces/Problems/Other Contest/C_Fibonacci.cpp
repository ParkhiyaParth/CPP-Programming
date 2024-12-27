#include <iostream>
#include<bits/stdc++.h>
#define ll unsigned long long 
#define MOD 1000000007
using namespace std;
ll solve(ll n)
{
    int fib[n+2];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2;i<=n;i++)
    {
        fib[i] = (fib[i-1] + fib[i-2])%MOD;
    }
    return fib[n];
}
int main()
{
    ll n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}