#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    float k, sum = 0;
    cin>>n>>k;
    float h[n];    
    for(int i=0;i<n;i++)
        cin>>h[i];
    sort(h, h+n);
    for(int i=0;i<n-1;i++){
        if(h[i]==-1)
            continue;
        else
            for(int j=i+1;j<n;j++)
                if(h[j]/k == h[i])
                    h[j] = -1;
                else if(h[j]/k > h[j])
                    continue;
    }
    for(int i=0;i<n; i++)
        if (h[i]!=-1)
            sum++;
    cout<<sum<<endl;
    return 0;
}