#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,c,n;
        cin>>a>>c>>n;
        cout<<a*pow(c,n-1)<<"\n";
    }
    return 0;
}