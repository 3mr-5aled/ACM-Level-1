#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int lowerCount = 0, upperCount = 0;
        for (char letter : s)
        {
            if (islower(letter))
            {
                lowerCount++;
            }
            else
            {
                upperCount++;
            }
        }

        int minSteps = min(lowerCount, upperCount);
        cout << minSteps << endl;
    }

    return 0;
}