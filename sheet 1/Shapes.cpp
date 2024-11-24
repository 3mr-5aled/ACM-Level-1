#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    long long L;
    cin >> L;
    double r = sqrt((L*L)+(L*L)) / 2;

    cout << fixed << setprecision(4) << r << endl;

    return 0;
}