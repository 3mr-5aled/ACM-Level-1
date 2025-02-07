#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        int num = i;
        int primeDivisors = 0;

        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                primeDivisors++;
                while (num % j == 0)
                {
                    num /= j;
                }
            }
        }
        if (num > 1)
        {
            primeDivisors++;
        }

        if (primeDivisors == 2)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}