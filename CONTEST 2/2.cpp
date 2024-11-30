#include <iostream>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    bool eqm = true;
    long long x, y = 1, z = 1, result;

    if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        x = n / 2;
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
