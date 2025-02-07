#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long N;
        cin >> N;

        int A = 1, B = N - 1;

        for (int i = 2; i * i <= N; ++i)
        {
            if (N % i == 0)
            {
                int A1 = i, B1 = N - i;
                int A2 = N / i, B2 = N - (N / i);

                if (A2 <= N / 2)
                {
                    A = A2;
                    B = B2;
                }
                else
                {
                    A = A1;
                    B = B1;
                }
                break;
            }
        }

        cout << A << " " << B << endl;
    }

    return 0;
}