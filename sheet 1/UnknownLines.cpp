#include <iostream>
using namespace std;

int main() {
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    if (Bx - Ax == 0 && Dx - Cx == 0) {
        // Both lines are vertical
        cout << "Parallel" << endl;
    } else if (Bx - Ax == 0) {
        // Line 1 is vertical
        cout << "Perpendicular" << endl;
    } else if (Dx - Cx == 0) {
        // Line 2 is vertical
        cout << "Perpendicular" << endl;
    } else {
        // Force floating-point division to avoid integer truncation
        double slope1 = (double)(By - Ay) / (Bx - Ax);
        double slope2 = (double)(Dy - Cy) / (Dx - Cx);

        if (slope1 == slope2) {
            cout << "Parallel" << endl;
        } else if (slope1 * slope2 == -1) {
            cout << "Perpendicular" << endl;
        } else {
            cout << "Neither" << endl;
        }
    }

    return 0;
}
