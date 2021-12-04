#include <iostream>
using namespace std;
int four(int y)
{

    while (y-- > 0)
    {
        int n, s = 0, r;
        cin >> n;
        while (n > 0)
        {
            r = n % 10;
            if (r == 4)
            {
                s = s + 1;
            }
            n = n / 10;
        }
        cout << s << endl;
    }
    return 0;
}
int main()
{
    int x;
    cin >> x;
    four(x);
    return 0;
}