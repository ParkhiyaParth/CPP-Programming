#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;
    // cout << __gcd(n,m) <<endl;/
    int c=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            if(s-i-j>=0 && s-i-j<=k){
                c++;
            }
        }
    }

    cout << c << endl;
    return 0;
}