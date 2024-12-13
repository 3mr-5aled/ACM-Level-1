#include <iostream>
using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;
    long long arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int even = 0, odd = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    count = min((even + odd) / 2, N / 2);

    cout << count;
    return 0;
}
