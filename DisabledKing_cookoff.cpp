#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        short int n;
        cin>>n;
        if(n%2==0)
        cout<<n;
        else
        cout<<n-1;
    }
return 0;
}