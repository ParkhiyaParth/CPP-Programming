#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    double n;
    cin >> n;
    double fixed = 3.141592653 * n * n;
    cout << setprecision(12);
    cout << fixed << endl;
    // your code.
}