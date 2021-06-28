#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int gift[n];
        for(int i=0;i<n;i++)
            cin>>gift[i];
        sort(gift, gift+n, greater<int>());
        for(int i=0;i<2*k;i++){
            
        }
    }
    return 0;

}

