#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,f;
        cin>>n>>k>>f;
        int start[n], end[n], tottime=0;
        for(int i=0;i<n;i++)
            cin>>start[i]>>end[i];
        
        for(int i=0;i<n;i++){
            tottime += end[i]-start[i];
        }
        if(k<=f-tottime)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}