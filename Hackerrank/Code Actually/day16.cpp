#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<str.length();j++){
            if(i==j)
                continue;
            for(int k=0;k<str.length();k++){
                if(k==j || k==i)
                    continue;
                for(int l=0;l<5;l++){
                    if(l==k || l==j|| l==i)
                        continue;
                    for(int m=0;m<5;m++){
                        if(m==l || m==k || m==j|| m==i)
                            continue;
                        cout<<str[i]<<str[j]<<str[k]<<str[l]<<str[m]<<"\n";    
                    }
                }
            }
        }
    }
    return 0;
}