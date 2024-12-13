#include <iostream>
using namespace std;

int main()
{

    long long N;
    cin >> N;
    string X;
    cin >> X;
    long long pre[10] = {0};

    for (int i = 0; i < N; i++)
    {
        pre[X[i] - '0']++;
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        long long K, C;
        cin >> K >> C;

        if (pre[C] >= K)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}