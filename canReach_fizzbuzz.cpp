#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if (n%k==0)
        {
        int ans=0;
            int i=n/k;
            while(i>0)
            {
                ans=ans+1;
                // i=n-k;
                i--;
            }
            cout<<ans;
        }
        else if (n=0)
        {
            cout<<0;
        }
        else
        {
        cout<<-1;
        }
        
        
    }
return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int ans,i=5;
//     while(i>0)
//     {
//         ans=ans+1;
//         i--;
//     }
// cout<<ans;
// return 0;
// }