#include <iostream>
using namespace std;

int main()
{

    long long N;
    cin >> N;

    long long prev;

    cin >> prev;
    long long newN = N - 1;

    while (newN--)
    {
        long long x;
        cin >> x;
        prev = x & prev;
    }
    cout << prev << endl;

    return 0;
}
