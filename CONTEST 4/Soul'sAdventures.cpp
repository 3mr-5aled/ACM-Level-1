#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, q, c;
    cin >> n >> q >> c;

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        long long cnt = 0;
        long long h;
        cin >> h;

        for (int i = 0; i < n; i++)
        {
            if (h >= arr[i])
            {
                cnt++;
                h += c;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}