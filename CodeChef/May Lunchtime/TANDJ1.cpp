#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k,trav;
        bool flag = false;
        cin>>a>>b>>c>>d>>k;
        trav = abs(c-a)+abs(d-b);
        if(trav<=k)
            if((k-trav)%2==0)
                flag=true;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}