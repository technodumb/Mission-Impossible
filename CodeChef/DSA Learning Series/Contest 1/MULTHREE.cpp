#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n, a, b, sum, mod;
        bool flag = false;
        cin>>n>>a>>b;
        if(n<=3){
            if((a+b)%3==0)
                flag = true;
        }
        else{
            n-=3;
            sum=2*(a+b);
            while(sum%10!=6)
                
        }
            
    }

    return 0;
}