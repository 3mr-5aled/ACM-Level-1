#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long number)
{

    if (number < 2)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (int i = 3; (i * i) <= number; i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        long long root = sqrt(arr[i]);
        if (root * root == arr[i] && isPrime(root))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}