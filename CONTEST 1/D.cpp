#include <iostream>
using namespace std;

int main()
{

    int n, l;
    cin >> n >> l;

    if ((l % 2 == 0 && n % 2 == 0) || (l % 2 != 0 && n % 2 != 0))
    {
        cout << n << endl;
    }
    else if ((l % 2 == 0 && n % 2 != 0) || (l % 2 != 0 && n % 2 == 0))
    {
        cout << n - 1 << endl;
    }

    return 0;
}
