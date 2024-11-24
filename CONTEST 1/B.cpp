#include <iostream>
using namespace std;

int main()
{

    long long n, k, d, c;
    cin >> n >> k >> d >> c;

    // c = k * ((((n * (n + 1) * (2 * n) + 1))) / 2);

    unsigned long long w = n * (n + 1) * (2 * n + 1);
    c = k * (w / 6);

    cout << c;
    return 0;
}
