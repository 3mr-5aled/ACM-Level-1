#include <iostream>
using namespace std;

int main() {

    int T;
    cin>>T;

    for(int i = 0;i<T;i++){
        int N;
        cin>>N;
        for(int j = 0; j<N;j++){
            cout<<N;
            if(j!= N-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }

    

    return 0;
}
