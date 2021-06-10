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
        int n;
        cin>>n;
        int mini, maxi, first, second, tot=0;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1)
                mini=i;
            else if(arr[i]==n)
                maxi=i;
        }
        if(min(mini, n-mini-1) < min(maxi, n-maxi-1)){
            tot += min(mini, n-mini-1);
            first = mini;
            second = maxi;
        }
        else{
            tot += min(maxi, n-maxi-1);
            first = maxi;
            second=mini;
        }

        if(first>=n/2)
            tot += min(second, first-second-1);
        else
            tot += min(second-first-1, n-second-1);

        cout<<tot+2<<"\n";
    }
    return 0;
}