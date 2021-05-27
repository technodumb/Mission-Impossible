#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n, sum = 0;
        cin>>n;
        long int w, cakes;
        for(int i=1;i<=n;i++){
            cin>>w;
            cakes = w*(w+1);
            sum+= (cakes)%1000000007;
        }
        cout<<sum%1000000007<<endl;
    }
    return 0;
}