#include<iostream>
using namespace std;

#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll xa, ya, xb, yb, xh, yh;
        cin>>xa>>ya>>xb>>yb>>xh>>yh;
        if((xa==xb&&xa==xh && (abs(ya-yh)+abs(yb-yh)==abs(ya-yb))) || (ya==yb&&yh==yb && (abs(xa-xh)+abs(xb-xh))==abs(xa-xb)))
            cout<<abs(xa-xb)+abs(ya-yb)+2;
        else
            cout<<abs(xa-xb)+abs(ya-yb);
        cout<<"\n";
    }
    return 0;
}