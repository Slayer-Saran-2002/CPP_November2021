#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b;
        cin>>a>>b;
        cout<< ceil(a/b) ;
        cout<<endl;
    }
return 0;
}