#include <iostream>

using namespace std;
int main()
{
    char x,y,z;
    cin>>x>>y>>z;
    int result = (char(x)-96) + (char(y) -96) + (char(z) -96);
    cout<<result<<endl;
    return 0;
}