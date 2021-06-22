#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n, a, b, sum, mod, times;
        bool flag = false;
        cin>>n>>a>>b;
        if(n<=3){
            if((a+b)%3==0)
                flag = true;
        }
        else{
            n-=3;
            sum=2*(a+b);
            times = n/4;
            n%=4;
            mod = sum%10;
            while(n--){
                sum += mod%3;
                mod = (2*mod)%10;
            }
            sum%=3;
            sum = (sum+times*2)%3;
            if(sum==0)
                flag = true;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";           
    }

    return 0;
}