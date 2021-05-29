#include<iostream>
using namespace std;

int main(){
    int n,k, x;
    bool found = false;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==k){
            found = true;
            cout<<1<<endl;
            break;
        }
    }
    if(!found)
        cout<<-1<<endl;
    return 0;
}