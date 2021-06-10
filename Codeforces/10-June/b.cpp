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
        int sum =0, n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];    
        }
        if(sum%n)
            cout<<-1<<"\n";
        else {
            int count=0;
            for(int i=0;i<n;i++)
                if(arr[i]>sum/n)
                    count+=1;
            cout<<count<<"\n";
        }

    }
    return 0;
}