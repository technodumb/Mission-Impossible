#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int dif[10], k, sum=0;
        for(int i=0;i<10;i++)
            cin>>dif[i];
        cin>>k;
        for(int i=9;i>=0;i--){
            sum+=dif[i];
            if(sum>k){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
// @technodumb is smarter

