#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, start = 1, end = 2e9, ans = 1;
        cin >> n;

        while (start <= end)
        {
            long long mid = start + (end - start) / 2;
            long long sumOfBlocks = (mid * (mid + 1)) / 2;

            if (sumOfBlocks >= n)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}