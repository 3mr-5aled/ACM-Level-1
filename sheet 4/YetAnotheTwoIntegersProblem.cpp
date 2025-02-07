#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, count = 0;
        cin >> a >> b;

        if (a == b)
        {
            count = 0;
        }
        else if (a > b)
        {
            // subtract k
            while (a != b)
                if ((a - b) >= 10)
                {
                    a -= 10;
                    count++;
                }
                else if ((a - b) < 10)
                {
                    a -= (a - b);
                    count++;
                    break;
                }
        }
        else
        {
            // add k
            while (a != b)
                if ((b - a) >= 10)
                {
                    a += 10;
                    count++;
                }
                else if ((b - a) < 10)
                {
                    a += (b - a);
                    count++;
                    break;
                }
        }
        cout << count << endl;
    }

    return 0;
}
