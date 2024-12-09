// #include <iostream>
// using namespace std;

// char Letters[10000]{0};
// int main()
// {
//     int N;
//     cin >> N;
//     cin >> Letters;

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i + 1; j < N; j++)
//         {
//             if (Letters[j] < Letters[i])
//             {
//                 swap(Letters[i], Letters[j]);
//             }
//         }
//     }
//     cout << Letters;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {

//     int N;

//     cin >> N;

//     string Letters;

//     cin >> Letters;

//     sort(Letters.begin(), Letters.end());
//     cout << Letters << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// const int MAX_N = 5000000;
// char Letters[MAX_N + 1];

// int main() {
//     int N;
//     cin >> N;
//     cin >> Letters;

//     int frequency[26] = {0};
//     for (int i = 0; i < N; i++) {
//         frequency[Letters[i] - 'a']++;
//     }

//     for (int i = 0; i < 26; i++) {
//         while (frequency[i]--) {
//             cout << char('a' + i);
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int frequency[26] = {0};

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        char Letter;
        cin >> Letter;
        frequency[Letter - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (frequency[i]--)
        {
            cout << char('a' + i);
        }
    }

    return 0;
}