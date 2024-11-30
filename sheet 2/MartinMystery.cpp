#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    bool isCollinear = true;

    for (int i = 2; i < N; ++i) {
        long long x, y;
        cin >> x >> y;

        if ((x2 - x1) * (y - y2) != (y2 - y1) * (x - x2)) {
            isCollinear = false;
            break;
        }
    }

    if (isCollinear) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
