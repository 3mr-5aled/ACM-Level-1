// #include <iostream>
// using namespace std;

// int main()
// {

//     int n, m;
//     cin >> n >> m;
//     long long arr[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int q;
//     cin >> q;

//     for (int i = 0; i < q; i++)
//     {
//         int r1, r2, c1, c2, result;
//         cin >> r1 >> r2 >> c1 >> c2;
//         int subgrid[n][m];

//         for (int i = r1 - 1; i < r2; i++)
//         {
//             for (int j = c1 - 1; j < c2; j++)
//             {
//                 if (i == (r1 - 1) && j == (c1 - 1))
//                 {
//                     result = arr[i][j];
//                 }
//                 else
//                 {
//                     result = result ^ arr[i][j];
//                 }
//             }
//         }
//         cout << result << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
long long arr[1000][1000];
long long function(long long arr[1000][1000], int r1, int r2, int c1, int c2)
{
    long long result = 0;
    for (int i = r1 - 1; i < r2; i++)
    {
        for (int j = c1 - 1; j < c2; j++)
        {
            result ^= arr[i][j];
        }
    }
    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int r1, r2, c1, c2;
        cin >> r1 >> r2 >> c1 >> c2;
        long long result = function(arr, r1, r2, c1, c2);
        cout << result << endl;
    }
    return 0;
}