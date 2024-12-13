#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int N, score = 0;
    cin >> N;

    int arr[N];
    int sorted_arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }

    sort(sorted_arr, sorted_arr + N);

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == sorted_arr[i])
        {
            score++;
        }
    }

    cout << score;

    return 0;
}