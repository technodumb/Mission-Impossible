#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, rt;
    cin>>n;
    rt=sqrt(n);
    int fac[rt],count=0, total=0, i=1;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0){
            fac[count]=i;
            count++;
        }
    if(fac[count-1]*fac[count-1]==n)
        total = count*2 -1;
    else
        total = count*2;
    cout<<total<<endl;
    for(int i=0;i<total;i++)
        if(i<count)
            cout<<fac[i]<<" ";
        else
            cout<<n/fac[total-i-1]<<" ";
    cout<<endl;
    return 0;
}