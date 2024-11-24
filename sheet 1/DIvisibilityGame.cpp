#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cstring>

using namespace std;
int main()
{
    long long N;
    long long a, b, c, d, e;
    cin >> N;
    cin >> a >> b >> c >> d >> e;

    // s1 3abas score, s2 sultan score
    long long s1 = 0, s2 = 0;

    if ((a % N == 0))
    {
        s1 += a;
    }
    else
    {
        s2 += a;
    }
    if ((b % N == 0))
    {
        s1 += b;
    }
    else
    {
        s2 += b;
    }
    if ((c % N == 0))
    {
        s1 += c;
    }
    else
    {
        s2 += c;
    }
    if ((d % N == 0))
    {
        s1 += d;
    }
    else
    {
        s2 += d;
    }
    if ((e % N == 0))
    {
        s1 += e;
    }
    else
    {
        s2 += e;
    }

    if (s1 > s2)
    {
        cout << "3abas" << endl;
    }
    else if (s2 > s1)
    {
        cout << "Sultan" << endl;
    }
    else
    {
        cout << "TIE" << endl;
    }

    return 0;
}