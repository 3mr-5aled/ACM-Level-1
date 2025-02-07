#include <iostream>
using namespace std;

int main()
{

    long long side[4];
    int Angle[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> side[i];
    }
    for (int i = 0; i < 4; i++)
    {

        cin >> Angle[i];
    }

    bool equalsides = side[0] == side[1] && side[1] == side[2] && side[2] == side[3];
    bool twoequal = (side[0] == side[1] && side[2] == side[3]) || (side[0] == side[2] && side[1] == side[3]) || (side[0] == side[3] && side[1] == side[2]);
    bool rightangles = (Angle[0] == 90 && Angle[1] == 90 && Angle[2] == 90 && Angle[3] == 90);
    bool twoequalangles = (Angle[0] == Angle[1] && Angle[2] == Angle[3] || (Angle[0] == Angle[2] && Angle[1] == Angle[3]) || (Angle[0] == Angle[3] && Angle[1] == Angle[2]));

    if (equalsides == true)
    {
        if (rightangles)
        {

            cout << "Square";
        }
        else
        {

            cout << "Rhombus";
        }
    }
    else
    {
        if (rightangles)
        {

            cout << "Rectangle";
        }
        else
        {

            cout << "Parallelogram";
        }
    }

    return 0;
}