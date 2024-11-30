// #include <iostream>
using namespace std;

int main()
{

    unsigned long long n, m, s, k;
    cin >> n >> m;
    long long max = pow(2,63);

    long long cnt;

    for (int i = 2; i < 63; i+=2)
    {
        long long s = pow(2, i) * (m * (m + 1) / 2);
        long long k = (s & (max - 1)) ^ n;
        long long result = k ^ (k >> 1);
    }

    return 0;
}

