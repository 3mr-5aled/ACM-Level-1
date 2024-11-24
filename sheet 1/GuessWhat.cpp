#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    double result = 1.0 * (n * k) / a;
    long long r = result;

    if (result - r != 0) {
        cout << "double" << endl;
    } else if (result >= -2147483648 && result <= 2147483647) {
        cout << "int" << endl;
    } else {
        cout << "long long" << endl;
    }

    return 0;
}
