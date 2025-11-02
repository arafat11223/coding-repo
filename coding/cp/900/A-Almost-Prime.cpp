#include <bits/stdc++.h>
using namespace std;
bool prime(int i)
{
    int cntt = 0;
    for (int j = 1; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
            cntt++;
            if (i / j != j)
            {
                cntt++;
            }
        }
        if (cntt > 2)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    // int pr;
    for (int i = 2; i <= n; i++)
    {

        for (int j = 2; j <= i; j++)
        {

            if (i % j == 0 && prime(j))
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}