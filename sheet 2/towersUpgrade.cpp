#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long x = abs(a - b);

    long long h1 = 1, h2 = 1, h3 = 1;
    for (long long i = 0; i < b; i++) {
        h1 = (h1 * a) % mod;
    }
    for (long long i = 0; i < a; i++) {
        h2 = (h2 * b) % mod;
    }
    for (long long i = 0; i < x; i++) {
        h3 = (h3 * c) % mod;
    }

    if (h1 <= h2 && h1 <= h3) {
        cout << h1 << " ";
        if (h2 <= h3) {
            cout << h2 << " " << h3;
        } else {
            cout << h3 << " " << h2;
        }
    } else if (h2 <= h1 && h2 <= h3) {
        cout << h2 << " ";
        if (h1 <= h3) {
            cout << h1 << " " << h3;
        } else {
            cout << h3 << " " << h1;
        }
    } else {
        cout << h3 << " ";
        if (h1 <= h2) {
            cout << h1 << " " << h2;
        } else {
            cout << h2 << " " << h1;
        }
    }

    return 0;
}
