// Write a program in C to check whether a number is a prime number or not using the function.
// Test Data :
// Input a positive number : 5
// Expected Output :
// The number 5 is a prime number.
#include <iostream>
using namespace std;
int primeORnot(int n1)
{
    int i = 2;
    while (i * i <= n1)
    {
        if (n1 % i == 0)      //Ex: 153%10 = 153/10=15.3 ,15*10=150, 153-150 =3
            return 0;        
        else
            i++;
    }
    return 1;
}
int main()
{
    
    int n1;
    cout << "Input a positive number : ";
    cin >> n1;
    int prime = primeORnot(n1);

    if (prime==1)
    {
        cout << "The number " << n1 << " is a prime number." << endl;
    }
    else
    {
        cout << "The number " << n1 << " is not a prime number." << endl;
    }
    return 0;
}