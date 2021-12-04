#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        double p=s+s*c/100;
        if(p>=a && p<=b){
            cout<<"YES";
        }
        else
        cout<<"NO";
    }
    
return 0;
}