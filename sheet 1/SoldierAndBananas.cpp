#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate total cost using the sum of the first w natural numbers
    int total_cost = k * (w * (w + 1)) / 2;

    // Calculate the amount to borrow (if total cost exceeds available money)
    int amount_to_borrow = max(0, total_cost - n);

    // Output the result
    cout << amount_to_borrow << endl;

    return 0;
}
