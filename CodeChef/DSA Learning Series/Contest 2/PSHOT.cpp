#include<iostream>
using namespace std;

#define highspeed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define tc ll t; cin>>t; while(t--)

int checkstr(ll num, string goals) {
    ll count=0;
    for(int i=0; i<2*num; i++){
        count+=(goals[i]?(i%2?-1:1):0);
        if(abs(count)>num-i/2)
            return i+1;
    }
    return num;
}

int main(){
    highspeed
    tc{
        ll n;
        cin>>n;
        string goals;
        cin>>goals;
        cout<<checkstr(n, goals)<<"\n";
    }
    return 0;
}