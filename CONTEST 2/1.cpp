#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        int fact= 1;
        for (int j = 1; j <= n; j++)
        {
            fact *= j;
        }
        sum += fact;
    }
    cout << sum << endl;

    return 0;
}
