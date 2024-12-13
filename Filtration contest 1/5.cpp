#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    long long c;
    cin >> c;

    double res1 = (1 + sqrt(1 + 4 * c)) / (2 * c);
    double res2 = (1 - sqrt(1 + 4 * c)) / (2 * c);

    cout << fixed << setprecision(5) << res1 << endl;
    cout << fixed << setprecision(5) << res2 << endl;

    return 0;
}