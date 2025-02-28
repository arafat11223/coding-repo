#include<iostream>
using namespace std;
class parent1
{
    public:
    parent1()
    {
        cout<<"parent 1 class"<<endl;
    }
};
class parent2
{
    public:
    parent2()
    {
        cout<<"parent 2 class"<<endl;
    }
};
class child: public parent2, parent1
{
    public:
    child()
    {
        cout<<"child 1 class"<<endl;
    }
};
int main()
{
    child ob;

}