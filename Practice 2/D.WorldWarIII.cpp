#include <iostream>
using namespace std;

int main()
{

    long long n, r;
    cin >> n >> r;
    long long first = 0;
    long long last = 0;
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x == r)
        {
            if (first == 0)
            {
                first = i + 1;
            }

            last = i + 1;
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << -1 << endl;
    }
    else
    {

        cout << first << " " << last << " " << cnt << endl;
    }

    return 0;
}
