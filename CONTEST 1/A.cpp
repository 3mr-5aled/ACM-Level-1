#include <iostream>
using namespace std;

int main()
{

    int n;
    char c;

    cin >> n;
    cin >> c;


    if (n == 2 && c == 't')
    {
        cout << "Yes" << endl;
    }
    else if (n == 2 && c == 'g')
    {
        cout << "No" << endl;
    }
    else if (n % 2 == 0 && c == 'g')
    {
        cout << "No" << endl;
    }
    else if (n % 2 == 0 && c == 't')
    {
        cout << "Yes" << endl;
    }
    else if (n % 2 != 0 && c == 't')
    {
        cout << "No" << endl;
    }
    else if (n % 2 != 0 && c == 'g')
    {
        cout << "Yes" << endl;
    }

    return 0;
}
