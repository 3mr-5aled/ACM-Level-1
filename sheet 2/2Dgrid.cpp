#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long sum = M * (N * (N - 1) / 2) + N * (M * (M - 1) / 2);

    cout << sum << endl;

    return 0;
}
