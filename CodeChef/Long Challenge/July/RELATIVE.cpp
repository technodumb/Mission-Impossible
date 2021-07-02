#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int g,c;
        cin>>g>>c;        
        cout<<c/2 * c/g<<endl;
    }
    return 0;
}