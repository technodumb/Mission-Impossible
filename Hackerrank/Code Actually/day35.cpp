#include<iostream>
using namespace std;

#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, sum=0, c;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>c;
            sum+=c;
        }
        if(sum<n)
            cout<<"1\n";
        else
            cout<<sum-n<<"\n";
    }
    return 0;
}