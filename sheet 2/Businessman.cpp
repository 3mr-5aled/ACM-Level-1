#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        double x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double d1,d2,d3;
        d1 =sqrt(pow(x2-x1,2)+pow(y2-y1,2)) ;
        d2 =sqrt(pow(x3-x1,2)+pow(y3-y1,2)) ;
        d3 =sqrt(pow(x3-x2,2)+pow(y3-y2,2)) ;
        if(int(d1) == int(d2) && int(d2) == int(d3)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

        return 0;
}
