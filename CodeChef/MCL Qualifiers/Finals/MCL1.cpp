#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int odd=0, even=0, k;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k%2)
            odd++;
        else
            even++;
    }
    if(even>odd)
        cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;
    return 0;
}