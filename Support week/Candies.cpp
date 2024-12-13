// #include <iostream>
// using namespace std;

// int main()
// {
//     long long N, Max = 0, sum = 0;
//     cin >> N;

//     while (sum + Max + 1 <= N)
//     {
//         Max++;
//         sum += Max;
//     }
//     cout << Max << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    long long result = (-1 + sqrt(1 + 8 * N)) / 2;
    cout << result << endl;

    return 0;
}
