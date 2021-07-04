#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k, inp, tot=0;
        vector<long long int> num;
        map<long long int,long long int> binsums;
        cin>>n>>k;
        for(int i=0;i<n; i++){
            cin>>inp;
            num.push_back(inp);
            int j=0;
            while(inp){
                binsums[j++]+= inp&1;
                inp = inp>>1;
            }
        }
        for(auto i = binsums.begin(); i != binsums.end(); i++){
            tot += i->second/k + (i->second%k?1:0);
        }
        cout<<tot<<endl;
    }
    return 0;
}