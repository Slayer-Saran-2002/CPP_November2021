#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        int a[n];
        for ( i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        while(j<n){
           
            if(a[j]%3==0)
            cout<<1;
        
        }
        
    }
return 0;
}