#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string A, B;
        cin>>A>>B;
        bool flag = true;
        int dif = (B[0] - A[0]+26)%26;
        for(long long int i=1;i<A.length();i++)
            if((B[i] - A[i]+26)%26!=dif )
                flag = false;
        if(flag)
            cout<<dif<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}