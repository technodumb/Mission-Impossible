#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%55==0)
        cout<<"BOTH"<<endl;
    else if(n%5 && n%11)
        cout<<"NONE"<<endl;
    else
        cout<<"ONE"<<endl;
    return 0;
}