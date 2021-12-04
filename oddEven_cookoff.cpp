#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        // int a = n;
        // while (a >= 10)
        // {
        //     a /= 10;
        // }
        // int b = n % 10;
        int a,b;
        cin>>a>>b;
        int sum = a + b;
        if (sum % 2 == 0)
        {
            cout << "Bob";
        }
        else
        
            cout << "Alice";
        
    }
    return 0;
}