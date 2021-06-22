#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--) {
        float a,b,r,c, items, mean;
        cin>>a>>b>>r>>c;
        if(a!=b && a!=r){
            items = (b-a)/(r-a);
            if(items!=int(items) || items<=0)
                cout<<"NO"<<endl;
            else {
            mean = (r*items + c) / (items+1);
            cout<<int(mean)<<endl;
            }        
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}