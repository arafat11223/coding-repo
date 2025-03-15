#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans=0;
    while (n--) 
    {
        int a, b, c;
        cin >> a>> b>>c;
        map<int,int>cnt;
        cnt[a]++;
        cnt[b]++;
        cnt[c]++;
        if(cnt[1]>=2)
        {
            ans++;
            
        }
        else
        {
            continue;
        }


       
    }
    cout<<ans<<endl;
}