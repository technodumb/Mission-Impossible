#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--) {
        float a,b,r,c, items, mean;
        cin>>a>>b>>r>>c;
        if(r-a){
            items = (b-a)/(r-a);
            mean = (r*items + c) / (items+1);
            cout<<mean<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}