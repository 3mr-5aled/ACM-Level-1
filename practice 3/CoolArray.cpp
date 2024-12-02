#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cin >> n;
    int num[100000];
    bool coolAray = true;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum += num[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (sum % num[i] != 0)
        {
            coolAray = false;
            break;
        }
    }

    if (coolAray)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
