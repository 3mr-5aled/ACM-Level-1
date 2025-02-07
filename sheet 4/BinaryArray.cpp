// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     long long arrA[n], arrB[n], S[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arrA[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arrB[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         long long x = arrA[i];
//         int count = 0;
//         while (x)
//         {
//             count += x & 1;
//             x >>= 1;
//         }
//         S[i] = count * arrB[i];
//     }

//     sort(S, S + n);

//     int q;
//     cin >> q;

//     while (q--)
//     {
//         long long k;
//         cin >> k;

//         int result = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (S[i] <= k)
//             {
//                 result++;
//             }
//             else
//             {
//                 break;
//             }
//         }

//         cout << result << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arrA[n], arrB[n], arrS[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    for (int i = 0; i < n; i++)
    {
        long long num = arrA[i];
        int cnt = 0;

        while (num)
        {
            cnt += num & 1;
            num >>= 1;
        }

        arrS[i] = (long long)cnt * arrB[i];
    }

    sort(arrS, arrS + n);

    int q;
    cin >> q;

    while (q--)
    {
        long long k;
        cin >> k;

        int start = 0, end = n;

        while (start < end)
        {
            int mid = (start + end) / 2;
            if (arrS[mid] <= k)
                start = mid + 1;
            else
                end = mid;
        }

        cout << start << endl;
    }

    return 0;
}
