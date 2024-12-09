#include <iostream>
using namespace std;

long long nums[1000];
long long numsIndex[1000];

int main()
{
    long long n, m, cnt = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < m; i++)
    {
        if (nums[i] % n == 0)
        {
            numsIndex[cnt] = i;
            cnt++;
        }
    }

    cout << cnt << endl;
    for (int i = cnt - 1; i >= 0; i--)
    {
        cout << numsIndex[i] + 1 << " ";
    }

    return 0;
}
