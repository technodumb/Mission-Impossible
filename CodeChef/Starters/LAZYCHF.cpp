#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int x, m, d;
        cin>>x>>m>>d;
        if(x*m < x+d)
            cout<<x*m<<endl;
        else
            cout<<x+d<<endl;
    }
    return 0;
}