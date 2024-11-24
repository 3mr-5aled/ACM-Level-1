#include <iostream>
using namespace std;

int main()
{

    long long n, a, b;
    cin >> n >> a >> b;

    if (a == n)
    {
        cout << 1 << endl;
    }
    else if (b >= a)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << n % (a + b) + 2 << endl;
    }

    return 0;
}
