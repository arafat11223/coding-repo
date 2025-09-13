#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int tcnt = 0;
        int f = 0;
        while (f+k  <= n)
        {
            int cnt = 0;
            for (int x = f; x < f + k && x < n; x++)
            {
                if (arr[x] == 0)
                {
                    cnt++;
                }
                else
                {
                    cnt = 0;
                    break;
                }
            }
            if (cnt == k)
            {
                tcnt++;
                f += k + 1;
            }
            else
            {
                f++;
            }
            
        } 
        cout << tcnt << endl;
    }       
}            