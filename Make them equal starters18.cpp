#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int max=arr[0];
        for(int j=1;j<n;j++)
        if(arr[j]>max)
        max=arr[j];
        int min=arr[0];
        for(int k=1;k<n;k++)
        if(arr[k]<min)
        min=arr[k];
        cout<<max-min;

    }
return 0;
}