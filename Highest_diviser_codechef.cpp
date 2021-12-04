#include <iostream>
using namespace std;
int hihestdiv(int n)
{
    int i, m = 0;
    for (i = 1; i <= 10; i++)
    {
        if (n % i == 0)
            m = max(m, i);
    }
    return m;
}
int main()
{
    int n;
    cin >> n;
    cout << hihestdiv(n);
    return 0;
}