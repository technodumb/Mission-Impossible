#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,x, max=-1, maxind = -1;
        cin>>n>>x;
        int spr, rating;
        for(int i=0;i<n;i++){
            cin>>spr>>rating;
            if(spr <= x && rating > max)
                max = rating;
        }
        cout<<max<<endl;
    }
    return 0;
}