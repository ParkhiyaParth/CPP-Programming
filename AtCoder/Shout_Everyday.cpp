#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Handle cases where B is less than C (sleeps overnight)
    if (B < C) {
        if (A >= B && A < C) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    } else { // B is greater than or equal to C (sleeps in the same day)
        if (A >= B || A < C) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}