#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    long long a[N];
    long long pre[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    pre[0] = a[0];
    for (int i = 1; i < N; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    for (int i = 1; i < N; i++) {
        pre[i] += pre[i - 1];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        cout << pre[x - 1] << endl;
    }

    return 0;
}