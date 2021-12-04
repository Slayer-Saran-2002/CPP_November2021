// Write a program in C to convert decimal number to binary number using the function.
// Test Data :
// Input any decimal number : 65
// Expected Output :
//  The Binary value is : 1000001

#include <iostream>
using namespace std;

void dectobin(int n)
{
    int i, binarynum[32];
    while (n > 0)
    {
        binarynum[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "The Binary value is : " << endl;
    for (int j = i - 1; j >= 0; j--)
        cout << binarynum[j];
}
int main() 
{
    int dno;
    cout << " Input any decimal number : ";
    cin >> dno;
    dectobin(dno);
    return 0;
}
