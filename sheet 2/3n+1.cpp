#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
            cout<<n<<" ";
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
                cout << n << " ";
            }
            else
            {
                n = (3 * n) + 1;
                cout << n << " ";
            }
        }
            cout<<endl;
    }

    return 0;
}
