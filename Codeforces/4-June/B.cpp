#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], count=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n, greater<int>());
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(gcd(a[i],2*a[j])>1 || gcd(a[j],2*a[i])>1)
                    ++count;    
        cout<<count<<"\n";
    }
    return 0;
}