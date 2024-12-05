#include<iostream>
using namespace std;
class add
{
    private:
    double length;
    int a;
    public:
    add()
    : length(0), a(6)
    {
        cout<<"length"<<length<<endl;
    }
};
int main()
{
    add ob;
}