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
        vector<string> v1(n), v2(n), v3(n);
        map<string,int>m;

        for (int j = 0; j < n; j++)
        {

            cin >> v1[j];
            m[v1[j]]++;
        }
        for (int k = 0; k < n; k++)
        {

            cin >> v2[k];
            m[v2[k]]++; 
        }
        for (int l = 0; l < n; l++)
        {

            cin >> v3[l];
            m[v3[l]]++;
        }
        int ans1=0;
        for(int i=0;i<n;i++)
        {
            if(m[v1[i]]==1)
            {

                ans1+=3;
            }
            else if(m[v1[i]]==2)
            {
                ans1+=1;
            }   
            else
            {
                ans1+=0;
            }

            

        }
        int ans2=0;
        for(int i=0;i<n;i++)
        {
            if(m[v2[i]]==1)
            {

                ans2+=3;
            }
            else if(m[v2[i]]==2)
            {
                ans2+=1;
            }   
            else
            {
                ans2+=0;
            }

            

        }
        int ans3=0;
        for(int i=0;i<n;i++)
        {
            if(m[v3[i]]==1)
            {

                ans3+=3;
            }
            else if(m[v3[i]]==2)
            {
                ans3+=1;
            }   
            else
            {
                ans3+=0;
            }

            

        }
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }
}