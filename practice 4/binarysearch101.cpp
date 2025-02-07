#include <iostream>

using namespace std;

main()
{

    long long start, end, number, count = 1;
    cin >> start >> end >> number;
    long long mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (mid == number)
        {
            break;
        }
        else if (mid > number)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        count++;
    }

    cout << count;

    return 0;
}