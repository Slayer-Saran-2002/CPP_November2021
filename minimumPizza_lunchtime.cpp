#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, gcd, lcm;
        cin >> n >> k;
        //         for (int i = 1; i <= n && i <= k; ++i) {

        //     // check if i is a factor of both integers
        //     if (n % i == 0 && k % i == 0)
        //         gcd = i;
        // }
        int lcm = (n > k) ? n : k;

        int ans = lcm / k;
        cout << ans << endl;
    }

    return 0;
}