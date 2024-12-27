#include <iostream>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        
    }
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout << "YES" << endl;
            return;
        }
        
    }
    cout << "NO" <<endl;
    
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