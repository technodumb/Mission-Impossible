#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, min, speed, nomax = 1;
        cin>>n;
        cin>>speed;
        min = speed;
        for(int i=0;i<n-1;i++){
            cin>>speed;
            if(speed<=min){
                min = speed;
                nomax++;
            }
        }
        cout<<nomax<<endl;
    }

    return 0;
}