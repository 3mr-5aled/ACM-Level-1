#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b;
    cin >> n;

    int asc_a_pos = 1, desc_a_pos = 1, asc_b_pos = 1, desc_b_pos = 1;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (x < a) asc_a_pos++;
        if (x > a) desc_a_pos++;

        if (x < b) asc_b_pos++;
        if (x > b) desc_b_pos++;
    }

    if (a > b) asc_a_pos++;
    if (a < b) desc_a_pos++;

    if (b > a) asc_b_pos++;
    if (b < a) desc_b_pos++;

    cout << asc_a_pos << " " << desc_a_pos << endl;
    cout << asc_b_pos << " " << desc_b_pos << endl;

    return 0;
}