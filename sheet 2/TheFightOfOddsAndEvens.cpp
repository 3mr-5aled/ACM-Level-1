#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;


    long long k = n / 2;
    long long sumOfEvens = k * (k + 1);

    long long totalSum = n * (n + 1) / 2;

    long long sumOfOdds = totalSum - sumOfEvens;

    long long result = abs(sumOfEvens - sumOfOdds);

    cout << result << endl;

    return 0;
}
