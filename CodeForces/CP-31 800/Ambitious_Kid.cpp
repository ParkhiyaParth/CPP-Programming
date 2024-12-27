#include <iostream>
using namespace std;
// void solve()
// {

// }
int main()
{
    int tt;
    cin >> tt;
    int arr[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> arr[i];
    }
    int mini;
    for (int i = 0; i < tt; i++)
    {
        if (arr[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        mini = min(mini, abs(arr[i]));
    }
    cout << mini << endl;
    return 0;
}