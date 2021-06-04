#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        bool fair = true;
        cin>>a>>b>>c>>d;
        if((a>c&&a>d&&b>c&&b>d) || (a<c&&a<d&&b<c&&b<d))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}