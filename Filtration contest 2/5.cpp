#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    long long max = 0;
    long long maxIdx = 0;
    long long N;
    cin >> N;
    long long P[N];
    long long pre[N];
    for (long long i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    pre[0] = P[0];
    for (int i = 1; i < N; i++)
    {
        pre[i] = pre[i - 1] + P[i];
    }
    for (int i = N; i >= 0; i--)
    {
        if (pre[i] % 2 == 0)
        {
            maxIdx = i;
            max = pre[i];
        }
    }
    cout << max << endl;
    sort(P, P + N);
    for (int i = 0; i < maxIdx; i++)
    {
        cout << P[i] << " ";
    }

    return 0;
}