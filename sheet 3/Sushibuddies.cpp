#include <iostream>
using namespace std;

int a[50], aNoDuplicates[50];
int main() {
    int n;
    long long result = 1;
    cin >> n;

    int NoDuplicatesCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        bool isDuplicate = false;
        for (int j = 0; j < NoDuplicatesCount; j++) {
            if (a[i] == aNoDuplicates[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            aNoDuplicates[NoDuplicatesCount++] = a[i];
        }
    }

    for (int i = 0; i < NoDuplicatesCount; i++) {
        result *= aNoDuplicates[i];
    }

    cout << result << endl;
    return 0;
}
