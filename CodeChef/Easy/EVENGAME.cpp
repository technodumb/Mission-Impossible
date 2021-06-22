#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0,a;
        for(int i=0;i<n; i++){
            cin>>a;
            sum+=a;
        }
        if (sum%2)
            cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}