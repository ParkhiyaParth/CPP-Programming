#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int pa = true;
    int pb = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            pa = false;
        }
    }
    if (pa)
    {
        cout << "Bob" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[n - i - 1])
        {
            pb = false;
        }
    }
    if(pb){
        cout << "Bob" << endl;
        return;
    }
    else{
        cout << "Alice" << endl;
        return;
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