#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        long long minn = INT_MAX, maxx = INT_MIN;
        
        maxx=max(abs((v[i]-v[n-1])),abs(v[i]-v[0]));
        if(i==0)
        {
            minn=abs(v[i]-v[i+1]);
        }
        else if(i==n-1)
        {
            minn=abs(v[i]-v[i-1]);
        }
        else
        {
            minn=min(abs((v[i]-v[i+1])),abs(v[i]-v[i-1]));
        }
        cout << minn << " " << maxx << endl;
    }
}