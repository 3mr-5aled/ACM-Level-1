#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int triangle[60][60];

    for (int i = 0; i < N; i++) {
        triangle[i][0] = 1;

        for (int j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle[i][i] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j != 0) cout << " ";
            cout << triangle[i][j];
        }
        cout << endl;
    }

    return 0;
}
