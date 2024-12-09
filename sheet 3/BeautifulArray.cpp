#include <iostream>
using namespace std;

int nums[100000];
bool NumsExists[10001] = {false};

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        NumsExists[nums[i]] = true;
    }

    for (int i = 0; i < N - 1; i++) {
        int product = nums[i] * nums[i + 1];
        if (product > 10000 || !NumsExists[product]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int A[100000];

// int main() {
//     int N;
//     cin >> N;

//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     for (int i = 0; i < N - 1; i++) {
//         int product = A[i] * A[i + 1];
//         bool found = false;

//         for (int j = 0; j < N; j++) {
//             if (A[j] == product) {
//                 found = true;
//                 break;
//             }
//         }

//         if (!found) {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }

//     cout << "YES" << endl;
//     return 0;
// }
