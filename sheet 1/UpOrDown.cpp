#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;

    // Check if N is a perfect square
    long long sqrtN = sqrt(N);
    
    if (sqrtN * sqrtN == N) {
        cout << "Face up." << endl;
    } else {
        cout << "Face down." << endl;
    }

    return 0;
}
