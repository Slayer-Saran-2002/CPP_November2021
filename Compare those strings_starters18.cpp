#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a1, a2;
        cin >> a1 >> a2;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            string s1 = a1.substr(i, n - i);
            string s2 = a2.substr(i, n - i);
            if (s1 < s2)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}