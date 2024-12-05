#include<iostream>
using namespace std;
class myclass
{
    int a;
    public:
    myclass(int x)
    {
        a=x;
        
    }
    int get()
    {
        return a;
    }

};
int main()
{
    myclass ob[2][3]={1,2,3,4,5,6};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ob[i][j].get()<<endl;
        }
        
    }
}