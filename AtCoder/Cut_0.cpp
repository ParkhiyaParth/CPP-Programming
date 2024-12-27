#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double X;
    cin >> X;
    cout << fixed << setprecision(3);
    string s = to_string(X);
    s.erase(s.find_last_not_of('0') + 1, string::npos);
    if (s.back() == '.') {
        s.pop_back();
    }
    cout << s << endl;

    return 0;
}
