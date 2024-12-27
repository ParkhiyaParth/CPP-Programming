#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a1,a2,b1,b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    cout << max(a1,a2)+max(b1,b2)+max(c1,c2)<<endl;;
    return 0;
}