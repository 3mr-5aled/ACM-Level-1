#include <iostream>
using namespace std;

int main()
{

    char Stones[101];
    int Colors[3]{0};
    cin >> Stones;

    int length = sizeof(Stones);

    for (int i = 0; i < length; i++)
    {
        if (Stones[i] == 'R')
        {
            Colors[0]++;
        }
        else if (Stones[i] == 'B')
        {
            Colors[1]++;
        }
        else if (Stones[i] == 'G')
        {
            Colors[2]++;
        }
    }

    cout << "Red stones = " << Colors[0] << endl;
    cout << "Blue stones = " << Colors[1] << endl;
    cout << "Green stones = " << Colors[2] << endl;

    return 0;
}