#include <iostream>
using namespace std;

int nums[1000][1000] = {0};

int main()
{

    int N;
    long long sum1 = 0;
    long long sum2 = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> nums[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        sum1 += nums[i][i];
        sum2 += nums[i][N - i - 1];
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}