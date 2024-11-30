#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int higherJump = 0, lowerJump = 0;

    int prevH = 0;
    for (int i = 0; i < N; i++)
    {
        int h;
        cin >> h;
        if (i > 0)
        {
            if (h > prevH)
            {
                higherJump++;
            }
            else if (h < prevH)
            {
                lowerJump++;
            }
        }
        prevH = h;
    }

    cout << higherJump << " " << lowerJump << endl;

    return 0;
}
