#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ln, maxm=0, j=1;
        cin>>ln;
        string str;
        cin>>str;
        for(int i=1;i<ln;i++){
            if(str[i]-1 == (int)str[i-1])
                j++;
            else {
                if(maxm<j) maxm=j;
                j=1;
            }
        }
        cout<<maxm<<"\n";
    }
    return 0;
}