#include <iostream>
using namespace std;

int main()
{

    int arr[3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] != 0)
    {
        arr[1] = arr[0] + 1;
        arr[2] = arr[0] + 2;
    }
    else if (arr[1] != 0)
    {
        arr[0] = arr[1] - 1;
        arr[2] = arr[1] + 1;
    }
    else if (arr[2] != 0)
    {
        arr[0] = arr[2] - 2;
        arr[1] = arr[2] - 1;
    }

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        cout << "Loser" << endl;
    }
    else
    {
        cout << "Winner" << endl;
    }

    return 0;
}