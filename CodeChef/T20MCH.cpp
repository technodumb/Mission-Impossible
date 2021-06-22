#include<iostream>
using namespace std;

int main(){
    int R, O, C;
    cin>>R>>O>>C;
    if (R-C < (20-O)*36)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}