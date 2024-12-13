#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long mod = 1e9 + 7;
    long long result = 1;
    for (long long i = 0; i < N; i++)
    {
        result = (result * 4) % mod;
    }
    cout << result << endl;
    return 0;
}
