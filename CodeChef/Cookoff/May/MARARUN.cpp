#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int D,d,A,B,C;
        cin>>D>>d>>A>>B>>C;
        int product =D*d;
        if (product >= 42)
            cout<<C<<endl;
        else if(product >=21)
            cout<<B<<endl;
        else if(product >= 10)
            cout<<A<<endl;
        else cout<<0<<endl;
    }
    return 0;
}