#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int a = 0, b = 0;
        if (mp['0'] % 2 != 0)
        {
            a = mp['0'] - 1;
        }
        else
        {
            a = mp['0'];
        }
        if (mp['1'] % 2 != 0)
        {
            b = mp['1'] - 1;
        }
        else
        {
            b = mp['1'];
        }
        int ans = (a + b) / 2;
        cout << ans << endl;
        if(ans)
        if (ans == k && k <= n / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}