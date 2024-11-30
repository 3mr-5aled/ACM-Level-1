
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int al3dad = 0;

    while (n--)
    {
        char action;
        cin >> action;

        if (action == '*')
        {
            if (al3dad == 0)
            {
                al3dad = 1;
            }
            else
            {
            al3dad = (al3dad % 20) + 1;
            }
        }
        else if (action == '>')
        {
            al3dad = (al3dad % 20) + 2;
        }

    }

    cout << al3dad << endl;
    return 0;
}
