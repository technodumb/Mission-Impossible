#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n, l, r;
        cin>>n>>l>>r;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>r){
                i--;
                n--;
            }
        }
        sort(arr, arr+n);
        long long int count = 0;
        for(long long int i=0;i<n-1;i++)
            for(long long int j = i+1;j<n;j++)
                if(arr[j]+arr[i]>= l && arr[j]+arr[i]<=r)
                    count++;
                else if(arr[j]+arr[i]>r)
                    break;
        cout<<count<<"\n";
    }
    return 0;
}