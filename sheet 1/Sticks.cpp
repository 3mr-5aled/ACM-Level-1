#include <iostream>

using namespace std;
int main()
{
    long long X,Y,Z;
    cin>>X>>Y>>Z;
    if(X+Y>Z && X+Z>Y & Y+Z>X){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}