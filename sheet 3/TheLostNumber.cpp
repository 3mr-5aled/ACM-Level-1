#include <iostream>
#include <cmath>
using namespace std;

long long nums[10];
bool status = false;

int main()
{

    int N;

    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }

    cin >> N;

    for (int i = 0; i < 10; i++)
    {
        if (N == nums[i])
        {
            status = true;
            break;
        }
    }

    if (status)
    {
        cout << "Found" << endl;
    }
    else
    {

        cout << "Not Found" << endl;
    }

    return 0;
}