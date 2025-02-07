#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int minDeg = abs(arr[1] - arr[0]);
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int num = arr[i];
            int den = arr[j];
            int gcd = __gcd(num, den);
            num /= gcd;
            den /= gcd;
            int degree = abs(num - den);
            if (degree < minDeg)
            {
                minDeg = degree;
            }
        }
    }

    cout << minDeg;

    return 0;
}