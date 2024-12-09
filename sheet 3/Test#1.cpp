#include <iostream>
using namespace std;

long long a[50][50];

int main() {
    int n, k;
    long long maxSum = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i <= n - k; i++) {
        for (int j = 0; j <= n - k; j++) {
            long long sum = 0;

            for (int x = 0; x < k; x++) {
                for (int y = 0; y < k; y++) {
                    sum += a[i + x][j + y];
                }
            }

            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum << endl;

    return 0;
}
