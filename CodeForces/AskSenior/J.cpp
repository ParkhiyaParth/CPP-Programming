#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n % m == 0 || m%n==0)
    {
        cout << "Multiples" <<endl;
    }
    else{
        cout << "No Multiples" <<endl;
    }
    return 0;
}