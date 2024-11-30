#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int cnt = 0;
        int x;
        cin >> x;
        for (int j = 1; j <= x; ++j)
        {
            if (x % j == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}