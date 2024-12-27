#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[2][n];
    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    int c=0;
    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if(arr[i][j]=='X' && arr[i][j+2]=='X' && arr[i][j+1]=='.' && arr[i+1][j+1]=='.' && arr[i+1][j]=='.' && arr[i+1][j+1]=='.'){
                c++;
            }
            if(arr[i][j]=='X' && arr[i][j+2]=='X' && arr[i][j+1]=='.' && arr[i-1][j-1]=='.' && arr[i-1][j]=='.' && arr[i+1][j+1]=='.')
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