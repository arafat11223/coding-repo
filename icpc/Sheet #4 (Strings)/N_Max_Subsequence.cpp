#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    
    cin>>str;
    int count=0;
    //int find=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]!=str[i+1])
        {
            count++;
            //find++;
        }

    }
    cout<<count<<endl;
    
    
}
