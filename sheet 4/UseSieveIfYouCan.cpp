// #include <iostream>
// #include <cmath>
// using namespace std;

// int divisorFreq[1000000]{0};
// int main()
// {

//     int x, y;
//     cin >> x >> y;

//     int cnt = 0;

//     long long result = pow(x, y);
//     long long n = result;

//     for (int i = 2; i * i <= n; ++i)
//     {
//         if (n % i == 0)
//         {

//             while (n % i == 0)
//             {
//                 n /= i;
//                 divisorFreq[i]++;
//             }
//             cnt++;
//         }
//     }

//     if (n > 1)
//     {

//         divisorFreq[n]++;
//         cnt++;
//     }

//     cout << cnt << endl;
//     for (int i = 2; i <= 999; i++)
//     {
//         if (divisorFreq[i] != 0)
//         {
//             cout << i << " " << divisorFreq[i] << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    int primeFactors[100], factorExponents[100];
    int factorCount = 0;
    int number = X;

    for (int divisor = 2; divisor * divisor <= number; divisor++)
    {
        if (number % divisor == 0)
        {
            int exponent = 0;
            while (number % divisor == 0)
            {
                exponent++;
                number /= divisor;
            }
            primeFactors[factorCount] = divisor;
            factorExponents[factorCount] = exponent * Y;
            factorCount++;
        }
    }

    if (number > 1)
    {
        primeFactors[factorCount] = number;
        factorExponents[factorCount] = Y;
        factorCount++;
    }

    cout << factorCount << "\n";
    for (int i = 0; i < factorCount; i++)
        cout << primeFactors[i] << " " << factorExponents[i] << endl;

    return 0;
}
