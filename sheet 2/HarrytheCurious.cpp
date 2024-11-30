#include <iostream>
using namespace std;

int main() {
    int l, r, N;
    cin >> l >> r >> N;

    bool found = false;

    for (int i = l; i <= r; i++) {
        bool isPrime = true;

        if (i < 2) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime && (N % i == 0)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }
    cout << endl;

    return 0;
}
