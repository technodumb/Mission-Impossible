//print n fibonacci numbers where n is a user input
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        int t=a;
        a=b;
        b=t+b;
    }
    return 0;
}