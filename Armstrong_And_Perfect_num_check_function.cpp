//  Write a program in C to check armstrong and perfect numbers using the function.
// Test Data :
// Input any number: 371
// Expected Output :
//  The 371 is an Armstrong number.
//  The 371 is not a Perfect number.
#include <iostream>
using namespace std;
int armstrong(int a)
{
    int s = 0, temp = a;
    while (a > 0)
    {
        int r = a % 10;
        s = s + r * r * r;
        a= a / 10;
    }
    if (temp == s)
        return 1;
    
        return 0;
}


int main()
{
    int a;
    cin >> a;
    if (armstrong(a) == 1)
    {
        cout << "The " << a << " is an Armstrong number."<<endl;
    }
    else if(armstrong(a) == 0)
    {
        cout << "The " << a << " is not Armstrong number."<<endl;
        cout << "The " << a << " is a Perfect number."<<endl;
    }

    return 0;
}