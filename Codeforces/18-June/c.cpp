#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, val;
        cin>>n;
        vector<pair<long long int,bool>> hills;
        vector<long long int> treated;
        for(long long int i=0;i<n;i++){
            cin>>val;
            hills.push_back(pair<long long int, bool>(val, true));
        }
        sort(hills.begin(), hills.end());
        long long int min = 1000000007, si, li, f=0, l=n-1;
        for(long long int i=0;i<n-1;i++){
            if(min>hills[i+1].first-hills[i].first){
                min = hills[i+1].first-hills[i].first;
                si = i;
                li = i+1;
            }
        }
        hills[si].second = false;
        hills[li].second = false;
        treated.push_back(hills[si].first);
        long long int done = n-2;
        while(done){
            while(!hills[l].second && l>=0) l--;
            if(l==-1) break;
            else {
                treated.push_back(hills[l].first);
                hills[l].second = false;
                done--;
            }

            while(!hills[f].second && f<n) f++;
            if(f==n) break;
            else {
                treated.push_back(hills[f].first);
                hills[f].second = false;
                done--;
            }
        }
        treated.push_back(hills[li].first);
        for(long long int i=0; i<n;i++)
            cout<<treated[i]<<" ";
        cout<<"\n";
    }
    return 0;
}