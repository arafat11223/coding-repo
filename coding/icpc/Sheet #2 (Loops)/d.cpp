#include<iostream>
using namespace std;
int main()
{
    int a,i;
    while(1)
    {
        cin>>a;
        if(a==1999)
        {
            cout<<"Correct"<<endl;
            break;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}