#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    long long odd = ((n + 1) / 2);
    if (m > odd)
    {
        cout << 2 * (m - odd) << endl;
    }
    else
    {
        cout << (m*2)-1 << endl;
    }
}