#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int i;
    int ttlsum = 0;
    for (i = 1; i <= n; i++)
    {
        int c = i;
        int rem, sum = 0;
        while (c != 0)
        {
            rem = c % 10;
            c = c / 10;
            sum = sum + rem;
        }

        if (sum >= a && sum <= b)
        {
            ttlsum += i;
        }
    }
    cout << ttlsum;
}