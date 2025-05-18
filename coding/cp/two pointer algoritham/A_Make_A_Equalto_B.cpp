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
        vector<int> v1(n), v2(n);
        int cnt1a=0, cnt1b=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            if(v1[i]==1)
            {
                cnt1a++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            if(v2[i]==1)
            {
                cnt1b++;
            }
        }
        int diff=0;
        for(int i=0;i<n;i++)
        {
            if(v1[i]!=v2[i])
            {
                diff++;
            }
        }
        int ans=min(abs(cnt1a-cnt1b)+1,diff);
        cout << ans << endl;
        
    }
}