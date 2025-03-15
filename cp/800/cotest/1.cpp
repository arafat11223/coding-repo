#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        int answer;
        cin>>a>>b;
        int large=max(a,b);
        int small=min(a,b);
        //cout<<small<<" "<<large;
        if(large>=small*2)
        {
            answer=large*large;

        }
        else
        {
            answer=(2*small)*(2*small);
        }
        cout<<answer<<endl;
    }
}