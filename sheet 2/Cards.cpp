// #include <iostream>
// using namespace std;

// int main()
// {
//     long long T;
//     cin >> T;
//     for (int i = 0; i < T; i++)
//     {
//         long long Q;
//         cin >> Q;

//         if (Q % 2 != 0)
//         {
//             cout << "First Box" << endl;
//         }
//         else if ((Q & 2) == 0)
//         {

//             cout << "First Box" << endl;
//         }
//         else
//         {
//             cout << "Second Box" << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {
        long long Q;
        cin >> Q;

        if (Q % 2 != 0)
        {
            cout << "First Box" << endl;
        }
        else
        {
            int power = 0;
            while (Q % 2 == 0)
            {
                Q /= 2;
                power++;
            }
            if (power % 2 == 0)
            {
                cout << "First Box" << endl;
            }
            else
            {
                cout << "Second Box" << endl;
            }
        }
    }
    return 0;
}
