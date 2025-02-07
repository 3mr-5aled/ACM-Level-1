#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        // k% magic essence and (100 - k)% water
        int magicPercentage = k;
        int waterPercentage = 100 - k;

        int divisor = __gcd(magicPercentage, waterPercentage);
        int steps = (magicPercentage + waterPercentage) / divisor;

        cout << steps << endl;
    }

    return 0;
}