#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int prev = 0;
    bool increasing = true;

    while (N--)
    {
        int x;
        cin >> x;

        if (prev > x || prev == x)
        {
            increasing = false;
        }
        prev = x;
    }

    if (increasing)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
