#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;
    long long low=(k*(k+1))/2;
    long long high=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    if(x>=low && x<=high){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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