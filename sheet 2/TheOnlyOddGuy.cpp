#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        int result = 0;

        for (int j = 0; j < N; j++) {
            int num;
            cin >> num;
            result ^= num;
        }

        cout << result << endl;
    }

    return 0;
}
