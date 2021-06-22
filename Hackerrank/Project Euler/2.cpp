#include<iostream>
using namespace std;


int main(){
    long int t;
    cin>>t;
    long long int n;
    while(t--){
        cin>>n;
        long long int a=1,b=2,k, sum=0;
        while(true){
            if(a>n)
                break;
            else if(a%2==0)
                sum+=a;
            k = a+b;
            a = b;
            b = k;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
