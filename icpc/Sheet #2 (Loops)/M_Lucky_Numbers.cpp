#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,i;
    int count=0;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        int n=i;
        string str;
        str=to_string(n);
        bool islucky=true;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]!='4' && str[j]!='7')
            {
                islucky=false;
                break;
            }
            

        }
        if(islucky)
        {
            cout<<str<<" ";
            count++;
        }
        

    }
    if(count==0)
    {
        cout<<"-1"<<endl;
    }
}