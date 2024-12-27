#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,c;
    cin >> a >> b >> c;
    // long long sum=a+b+c;
    if(c%2==0){
        if(a>b){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }
    }
    else{
        if(b>a){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
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