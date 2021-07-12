#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll num;
    cin>>num;
    ll s, depth=0, maxdepth=0, sdepth=0;
    ll len=1, maxlen=0, slen=0;
    for(int i=0; i<num; i++){
        cin>>s;
        depth+=(s==1?1:-1);
        if(depth>maxdepth){
            maxdepth=depth;
            sdepth=i+1;
        }
        if(depth==0){
            if(len>maxlen){
                maxlen=len;   
                slen=i-len+2;
            }
            len=0;
        }
        len++;
    }
    cout<<maxdepth<<" "<<sdepth<<" "<<maxlen<<" "<<slen;
    return 0;
}