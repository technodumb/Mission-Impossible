#include<iostream>
using namespace std;

int main(){
    int n, lead=0, max=0, win;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(abs(lead+a-b)>max){
            max = abs(lead+a-b);
            win = (a>b?1:2);
        }
        lead+=(a-b);
        // cout<<lead<<endl;
    }
    cout<<win<<" "<<max<<"\n";
    return 0;
}