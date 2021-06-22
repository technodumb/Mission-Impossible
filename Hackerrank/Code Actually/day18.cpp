#include<iostream>
#include<cctype>
using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(!(tolower(str[i]) == 'a' || tolower(str[i]) == 'e'||tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u'))
            cout<<'.'<<(char)tolower(str[i]);
    }
    return 0;
}
