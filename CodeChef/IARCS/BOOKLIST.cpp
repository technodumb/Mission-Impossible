#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    map<int,int> shelf;
    for(int i=1;i<=t;i++){
        cin>>shelf[i];
    }
    cout<<shelf[1];
    return 0;
}