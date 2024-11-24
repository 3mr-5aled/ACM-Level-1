#include <iostream>
using namespace std;

int main() {
    int X1, Y1, X2, Y2, X3, Y3;
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;
    cin >> X3 >> Y3;

    if ((Y2 - Y1) * (X3 - X1) == (Y3 - Y1) * (X2 - X1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
