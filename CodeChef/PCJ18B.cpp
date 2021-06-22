#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--) {
        int N, sum = 0;
        cin>>N;
        for(int i=N;i>0;i-=2){
            sum+= i*i;
        }
        cout<<sum<<endl;
    }
    return 0;
}