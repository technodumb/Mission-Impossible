#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        if(sum<n)
            cout<<1;
        else
            cout<<sum-n;
        cout<<"\n";
    }
    return 0;
}