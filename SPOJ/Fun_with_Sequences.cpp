#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// void solve()
// {
    
// }
int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                // cout << a[i] << " ";
                continue;
            }
            if(a[i]!=b[i]){
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}