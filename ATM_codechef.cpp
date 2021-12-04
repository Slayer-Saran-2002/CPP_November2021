#include <iostream>
using namespace std;

int main()
{
    int x;
    float b;
    cin >> x >> b;
    if (x%5==0 && x+0.5<=b)
    {
        cout << (b - x - 0.5);
    }

    else
    {
        cout<<b;
    }

    return 0;
}