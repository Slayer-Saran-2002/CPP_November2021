#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int size = 1000, fact[size], j = size - 1;
        fact[size - 1] = 1;
        while (n > 1)
        {
            int x, carry = 0;
            for (int i = size - 1; i >= j; i--)
            {
                x = fact[i] * n + carry;
                fact[i] = x % 10;
                carry = x / 10;
            }
            while (carry > 0)
            {
                fact[--j] = carry % 10; //j=size-1
                carry = carry / 10;
            }

            n--;
        }
        for (int i = j; i < size; i++)
        {
            cout << fact[i];
        }
        cout << endl;
    }
    return 0;
}