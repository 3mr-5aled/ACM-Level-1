#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[n];
    long long maxNum, minNum;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            maxNum = a[i];
            minNum = a[i];
        }
        else
        {
            maxNum = max(maxNum, a[i]);
            minNum = min(minNum, a[i]);
        }
    }

    cout << maxNum - minNum << endl;

    return 0;
}
