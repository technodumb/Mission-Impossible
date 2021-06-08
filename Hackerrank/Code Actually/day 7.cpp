#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int i=0,j=0, count=0;

        while(i<a.size()){
            if(a[i] == b[j] ){
                j++;
                if(j==b.size()){
                    count++; j=0;
                }
            }
            else if(a[i]==b[0])
                j=1;
            else
                j=0;
            ++i;
        }
        cout<<count<<"\n";
    }
    return 0;
}