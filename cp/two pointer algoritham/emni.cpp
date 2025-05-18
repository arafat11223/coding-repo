#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int cnt1a = accumulate(a.begin(), a.end(), 0);
        int cnt1b = accumulate(b.begin(), b.end(), 0);

        int diff = 0;
        for (int i = 0; i < n; i++)
            if (a[i] != b[i]) diff++;

        int ans = min(abs(cnt1a - cnt1b) + 1, diff);
        cout << ans << endl;
    }
}