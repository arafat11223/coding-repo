#include<iostream>
using namespace std;
class counter
{
    int a;
    public:
    counter (int x)
    {
        a=x;
    }
    counter operator ++(int )
    {  
        a++; 



    }
    void show()
    {
        cout<<a;
    }
};
int main()
{
    counter obj1(10);
    obj1++;
    obj1.show();

}