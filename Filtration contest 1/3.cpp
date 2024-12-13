// #include <iostream>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;
//     char letters[N];
//     cin >> letters;
//     char check[N];
//     cin >> check;
//     bool yes = true;

//     for (int i = 0; i < N; i++)
//     {
//         if (letters[i] == '?')
//         {
//             if (i == 0 || letters[i - 1] == '?')
//             {
//                 letters[i] = char(int(letters[i + 1]) - 1);
//             }
//             else
//             {
//                 letters[i] = char(int(letters[i - 1]) + 1);
//             }
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (check[i] != letters[i])
//         {
//             yes = false;
//             break;
//         }
//         else
//         {
//             yes = true;
//         }
//     }

//     if (yes)
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

char letters[100000];
char check[100000];
int main()
{

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> letters[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> check[i];
    }

    bool yes = true;

    for (int i = 0; i < N; i++)
    {
        if (letters[i] != '?')
        {
            if (letters[i] != check[i])
            {
                yes = false;
                break;
            }
            else
            {
                yes = true;
            }
        }
    }

    if (yes)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}