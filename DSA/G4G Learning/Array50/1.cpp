#include<iostream>
using namespace std;

int findk(int arr[], int n, int x, int k){
    int i=0, j=k;
    while(i<n){
        if(j==0)
            return 0;
        if(arr[i] == x){
            i+=j;
            j=k;
            continue;
        }
        j--; i++;
    }
    if(j==0)
            return 0;
    return 1;
}

int main(){
    int arr1[] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,3};
    int x = 1, k=3;
    int lenarr = sizeof(arr1)/sizeof(arr1[0]);
    cout<<(findk(arr1,lenarr, x, k)?"Yes":"No")<<endl;
}