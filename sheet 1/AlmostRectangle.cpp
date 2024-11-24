#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // area of trapezoid = (a+b)/2 * h
    // float area = (a+c)/2 * b;
    float fullArea = a * b;
    float triArea = .5 * (a - c) * (b - d);

    float area = fullArea - triArea;
    cout<<fixed<<setprecision(6) << area << endl;

    return 0;
}