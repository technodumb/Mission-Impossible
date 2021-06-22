#include<iostream>
#include<list>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        map<int,int> cache;
        list <int> cheater;
        cin>>n>>m>>k;
        int l;
        for(int i=0;i<k;i++){
            cin>>l;
            if(l<=n){
                if(cache[l]==0)
                    cache[l]++;
                else 
                    cheater.push_back(l);
            }
        }
        cheater.sort();
        cout<<cheater.size()<<" ";
        for(int i=0;i<cheater.size();i++){
            cout<<cheater.front()<<" ";
            cheater.pop_front();
            }
        cout<<endl;

    }
    return 0;
}