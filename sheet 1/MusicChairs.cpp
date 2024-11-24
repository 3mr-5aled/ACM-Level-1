#include <iostream>
using namespace std;
int main() {
    unsigned long long int n,m,x;
    cin>>n>>m>>x;
    if (m % 2 !=0){
        m++;
    }
    if((m+x )<= n){
        cout<<m+x;
    }
    else if((m+x)%n == 0){
        cout<<n;
    }else{
        cout<<(m+x)%n;
    }
    return 0;
}