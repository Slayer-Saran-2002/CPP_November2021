#include <iostream>
using namespace std;
int main()
{
    int x, f, n, s = 0;
    cin >> x >> f;
    for (int i = 0; i <= x; i++)
    {
        cin >> n;
        if (n % f == 0)
        {
            s = s + 1;
        }
    }
    cout << s;
    return 0;
}