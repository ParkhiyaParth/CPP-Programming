#include <iostream>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;

    bool fnd=false;
    for(int i=0;i<=5;i++){
        if(x.find(s)!=string::npos){
            cout << i << endl;
            fnd=true;
            break;
        }
        x.append(x);
    }
    if(!fnd){
        cout << -1 << endl; 
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