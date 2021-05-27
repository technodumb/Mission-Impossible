#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[2], b[2], c[2];
        int coinc=0;
        cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1];
        if(a[0]<=b[1] && b[0]<=a[1])
            if(b[0]<=c[1] && c[0]<=b[1])
                if(c[0]<=a[1] && a[0]<=c[1]){
                    cout<<"WIN"<<endl;
                    coinc = 1;
                    }
        if (coinc==0)
            cout<<"LOSE"<<endl;
    }
    return 0;
}