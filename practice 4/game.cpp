#include <iostream>
using namespace std;

int main()
{

    long long k, q;
    cin >> k >> q;
    long long arr[k];

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        long long n, mid, start = 0, end, num = -1;
        end = k - 1;

        cin >> n;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] <= n)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
                num = arr[mid];
            }
        }
        cout << num << endl;
    }

    return 0;
}