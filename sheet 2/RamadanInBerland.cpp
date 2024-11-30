#include <iostream>
using namespace std;

int main()
{

    int N;
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        long long L, R;
        cin >> L >> R;


        long long sumR = (R * (R + 1)) / 2;
        long long sumL = ((L - 1) * L) / 2;

        long long result = sumR - sumL;
        cout << result << endl;
    }

    return 0;
}
