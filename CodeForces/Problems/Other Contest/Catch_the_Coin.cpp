#include <iostream>
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    if(y>=(-1)){
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