#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int g, p, a[10];
        cin>>g>>p;
        for(int i=0; i<10; i++)
            cin>>a[i];
        int min, max=0, sum = 0;
        for(int i=g; i<10; i++)
            sum+=a[i];
        min = sum/p+1;
        sum+= a[g-1];
        max = sum/p;
        int temp = sum%p;
        if(temp){
            max+=1;
        }
        
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}