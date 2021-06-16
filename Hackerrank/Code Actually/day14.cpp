#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        int count = 0, vary=0;
        cin>>s1>>s2;
        for(int i=0; i<s1.length();i++)
            if(s1[i]!=s2[i]){
                if(s1[i]=='0')
                    vary++;
                else if(s1[i]=='1')
                    vary--;
                count++;
            }
        if(vary==0)
            cout<<count/2;
        else
            cout<<-1;    
        cout<<"\n";    
    }
    return 0;
}