#include <iostream>
using namespace std;

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;

    long long sumOfDays = n * (n + 1) / 2;

    long long k = n/a;

    long long sumOfSpeical = a * (k * (k + 1)) / 2;

    long long sumOfAlternate = k * b + (k*(k-1))/2;

    long long result = sumOfDays - sumOfSpeical + sumOfAlternate;

    cout<<result<<endl;

    return 0;
}
