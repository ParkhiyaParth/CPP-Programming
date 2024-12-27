#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n%3==0){
        cout << "Second" << endl;
    }
    else{
        cout << "First" << endl;
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