#include<iostream>
using namespace std;
int main()
{
    int n,i,mul;
    cin>>n;
    for(i=1;i<=12;i++)
    {
        mul=n*i;
        cout<<n<<" * "<< i<< " = "<< mul<<endl;
    }
    return 0;
}
