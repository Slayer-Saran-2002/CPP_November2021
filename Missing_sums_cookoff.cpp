// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, i, r;
//         cin >> n;
//         int a[n];
//         for (i = 0; i <= 10000000; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 for (int k = j + 1; k < n; k++)
//                 {
//                     if (a[j] + a[k] == i)
//                         goto jump;
//                 }
//             }
//             a[r] = i;
//             r++;
//         jump:{}
//         }
//         for (i = 0; i < n; i++)
//             cout << a[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=1;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            a[i]=j+2*i;
        }
        for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
        }
        cout<<endl;
    }
return 0;
}   