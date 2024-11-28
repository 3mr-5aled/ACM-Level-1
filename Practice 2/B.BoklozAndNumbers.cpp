#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long max;
    cin >> max;

    for (int i = 1; i < N; i++) 
    {
        long long num;
        cin >> num;
        if (num > max) {
            max = num;
        }
    }
    cout << max << endl;
    return 0;
}
