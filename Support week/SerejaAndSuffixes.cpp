#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l[m];
    for (int i = 0; i < m; i++)
    {
        cin >> l[i];
    }

    int distinct_cnt[n + 1] = {0};
    bool suff[100001] = {false};

    int distinct = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!suff[a[i]])
        {
            distinct++;
            suff[a[i]] = true;
        }
        distinct_cnt[i] = distinct;
    }

    for (int i = 0; i < m; i++)
    {
        cout << distinct_cnt[l[i] - 1] << endl;
    }

    return 0;
}
