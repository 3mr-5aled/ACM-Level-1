#include <iostream>
#include <cctype>

using namespace std;
int main()
{
    char Letter;
    cin>>Letter;

    if(Letter == 'c' || Letter == 'h' || Letter == 'i'|| Letter == 'C'|| Letter == 'H'|| Letter == 'I'){
        cout<<"Yes"<<endl;
    
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}