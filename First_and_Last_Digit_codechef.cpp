#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        x=n;
        while(x>=10)
        {
        x/=10;
        }
        int y=n%10;
        cout<<x+y<<endl;
    }
return 0;
}