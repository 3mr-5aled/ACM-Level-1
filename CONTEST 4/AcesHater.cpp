#include <iostream>
using namespace std;

int main()
{

    long long a, b, sum;
    cin >> a >> b;
    sum = a + b;
    if (sum % 2 == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }

    return 0;
}
