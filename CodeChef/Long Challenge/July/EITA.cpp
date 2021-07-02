#include<iostream>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
        int d, x, y, z;
        cin>>d>>x>>y>>z;
        if(x*7>(y*d + z*(7-d)))
            cout<<x*7;
        else
            cout<<(y*d + z*(7-d));
        cout<<"\n";
    }
    return 0;
}