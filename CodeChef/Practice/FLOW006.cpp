#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int num, sum = 0;
        cin>>num;
        while(num>0){
            sum += num%10;
            num /= 10;
        }
        cout<<sum<<endl;
    }
    return 0;
}