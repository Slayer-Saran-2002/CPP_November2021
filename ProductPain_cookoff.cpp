#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i=0,j=n-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        int p=(a[i]-a[i+1])*(a[i+1]-a[j]);
        cout<<p<<endl;
    }
return 0;
}