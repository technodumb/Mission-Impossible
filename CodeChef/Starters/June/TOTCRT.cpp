#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        map<string,int> solutions;
        cin>>n;
        string prob;
        int n_correct = 0;
        for(int i=0;i<3*n;i++) {
            cin>>prob>>n_correct;
            solutions[prob] += n_correct;
        }
        vector<int> arrs;
        int j=0;
        for(auto i=solutions.begin();i!=solutions.end();i++, j++) {
            cout<<i<<endl;
        }

    }
}