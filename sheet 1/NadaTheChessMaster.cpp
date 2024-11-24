#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    char chr;
    int num;

    cin>>chr>>num;

    if(chr == 'a' || chr == 'h' || num == 1 || num == 8){
        cout<<7<<endl;
    } else if (chr == 'b' || chr == 'g' || num == 2 || num == 7){
        cout<<9<<endl;
    } else if (chr == 'c' || chr == 'f' || num == 3 || num == 6){
        cout<<11<<endl;
    }else if (chr == 'd' || chr == 'e' || num == 4 || num == 5){
        cout<<13<<endl;
    }else {
        cout<<0<<endl;
    }


    return 0;
}