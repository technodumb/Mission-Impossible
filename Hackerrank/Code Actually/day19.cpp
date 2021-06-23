#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, a, b;
    string str;
    cin>>n>>str>>a>>b;
    while(n--){
        int sar=0, anu=0;
        string ran;
        cin>>ran;
        for(auto i:ran)
            if(str.find(i)<str.length())
                sar+=a;
            else anu+=b;
        if(sar>anu)
            cout<<"SARTHAK";
        else if(sar == anu)
            cout<<"DRAW";
        else 
            cout<<"ANURADHA";
        cout<<"\n";
    }
    return 0;
}
