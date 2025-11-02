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
        long long arr[n];
        int cn1 = 0;
        int cnt = 2;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                v1.push_back(arr[i]);
            }
            else
            {
                v2.push_back(arr[i]);
            }
        }
        long long summ = accumulate(v1.begin(), v1.end(), 0);
        sort(v2.rbegin(), v2.rend());
        int sz = v2.size() - 1;
        if (v2.size() == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        long long sum1 = 0, sum2 = 0;
        if (sz % 2 == 0)
        {
            sum1 = accumulate(v2.begin(), v2.end() - sz, 0);
            cout << sum1 + summ << endl;
        }
        else
        {
            sum2 = accumulate(v2.begin(), v2.end() - (sz - 1), 0);
            cout << summ + sum2 << endl;
        }

        // else
        // {
        //     cout<<v2[0]+summ<<endl;

        // }
    }
}
