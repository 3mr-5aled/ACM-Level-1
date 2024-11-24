#include <iostream>
using namespace std;

int main() {

    string N;
    cin>>N;

    int evenCount = 0, oddCount=0;


    for(char ch :N){
        if(int(ch) % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }

    cout<<"Even : "<<evenCount<<endl;
    cout<<"Odd : "<<oddCount<<endl;


    return 0;
}
