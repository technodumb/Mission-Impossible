#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n, count=0;
        cin>>n;
        for(long long int i=5; n/i>0;i*=5)
            count+=n/i;
        cout<<count<<"\n";
    }

    return 0;
}